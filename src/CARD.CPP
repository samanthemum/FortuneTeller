#include "Card.h"
#include <ctime>
#include <random>
#include <iostream>
#include <fstream>

Card::Card()
{
    //ctor



        srand(time(0));
        cardNumber = rand()%22;
        reversed = rand()%2;
        switch(cardNumber){
            case 0:
                name = "The Fool";
		setAssociations("the_fool.txt");
                break;
            case 1:
                name = "The Magician";
		setAssociations("the_magician.txt");
                break;
            case 2:
                name = "The High Priestess";
		setAssociations("the_high_priestess.txt");
                break;
            case 3:
                name = "The Empress";
		setAssociations("the_empress.txt");
                break;
            case 4:
                name = "The Emperor";
		setAssociations("the_emperor.txt");
                break;
            case 5:
                name = "The Hierophant";
		setAssociations("the_hierophant.txt");
                break;
            case 6:
                name = "The Lovers";
		setAssociations("the_lovers.txt");
                break;
            case 7:
                name = "The Chartiot";
		setAssociations("the_chariot.txt");
                break;
            case 8:
                name = "Strength";
		setAssociations("strength.txt");
                break;
            case 9:
                name = "The Hermit";
		setAssociations("the_hermit.txt");
                break;
            case 10:
                name = "Wheel of Fortune";
		setAssociations("wheel_of_fortune.txt");
                break;
            case 11:
                name = "Justice";
		setAssociations("justice.txt");
                break;
            case 12:
                name = "The Hanged Man";
		setAssociations("the_hanged_man.txt");
                break;
            case 13:
                name = "Death";
		setAssociations("death.txt");
                break;
            case 14:
                name = "Temperance";
		setAssociations("temperance.txt");
                break;
            case 15:
                name = "The Devil";
		setAssociations("the_devil.txt");
                break;
            case 16:
                name = "The Tower";
		setAssociations("the_tower.txt");
                break;
            case 17:
                name = "The Star";
		setAssociations("the_star.txt");
                break;
            case 18:
                name = "The Moon";
		setAssociations("the_moon.txt");
                break;
            case 19:
                name = "The Sun";
		setAssociations("the_sun.txt");
                break;
            case 20:
                name = "Judgement";
		setAssociations("judgement.txt");
                break;
            case 21:
                name = "The World";
		setAssociations("the_world.txt");
                break;
                default:
            name = "The Bug";
                break;

            }
}

string Card::getName(){
    return name;
}

bool Card::getReversed(){
    return reversed;
}

int Card::getNumber()
{
    return cardNumber;
}

vector <string> Card::getNegativeAssociations(){
    return negativeAssociations;
}

vector <string> Card::getPositiveAssociations(){
    return positiveAssociations;
}

string Card::getPositiveAssociationsToString(){
	string output = "";
	for(int i = 0; i < Card::positiveAssociations.size(); i++){
        output = output + Card::positiveAssociations[i] + " ";
	}
	return output;
}

string Card::getNegativeAssociationsToString(){
	string output = "";
	for(int i = 0; i < Card::negativeAssociations.size(); i++){
        output = output + Card::negativeAssociations[i] + " ";
	}
	return output;
}

void Card::setAssociations(string file){

	   string line;
	   ifstream input;
	   bool positive = true;
	   input.open(file, ios::in);
	   if(!input.is_open()){
        cout<<"Error in opening file";
	   }
	   if(input.is_open()){
	   while(getline(input, line)){
        if(line!=""){
        if(positive){
		positiveAssociations.push_back(line);
        }
        if(!positive){
		negativeAssociations.push_back(line);
        }
        }
        else{
            positive = false;
        }
	   }
	   }
	   input.close();

}


string Card::to_string(){
    string output = Card::getName() + " " + std::to_string(Card::getNumber());
    output = output + "\n";
    return output;
}



Card::~Card()
{
    //dtor
}

