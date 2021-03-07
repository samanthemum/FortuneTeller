#include "Diviner.h"

Diviner::Diviner()
{
    //ctor
}

void Diviner::setFuture(Card card){
    future = card;
    setFutureReading(future);
}

void Diviner::setPresent(Card card){
    present = card;
    setPresentReading(present);
}

void Diviner::setPast(Card card){
    past = card;
    setPastReading(past);
}

void Diviner::setPastReading(Card card){
   string list = "";
   if(card.getReversed()){
      for(int i = 0; i < card.getNegativeAssociations().size(); i++){
         if(i==card.getNegativeAssociations().size()-1){
            list+="and " + card.getNegativeAssociations()[i] + ".";
         }
         else{
           if(card.getNegativeAssociations().size()>2){
            list+=card.getNegativeAssociations()[i] + ", ";
            }
            else{
                list+=card.getNegativeAssociations()[i] + " ";
            }
         }
      }
      pastReading = "Your card was " + card.getName() + ". Oh, I can see your childhood was plagued by " + list;
      pastReading+="\nWhat grave misfortune!";
   }
   else{
      for(int i = 0; i < card.getPositiveAssociations().size(); i++){
         if(i==card.getPositiveAssociations().size()-1){
            list+="and " + card.getPositiveAssociations()[i] + ".";
         }
         else{
            if(card.getPositiveAssociations().size()>2){
            list+=card.getPositiveAssociations()[i] + ", ";
            }
            else{
                list+=card.getPositiveAssociations()[i] + " ";
            }
         }
      }
      pastReading = "Your card was " + card.getName() + ". Your childhood was defined by " + list;
      pastReading+="\nPretty lighthearted, in comparison to others I've seen.";
   }
}

void Diviner::setPresentReading(Card card){
   string list = "";
   if(card.getReversed()){
      for(int i = 0; i < card.getNegativeAssociations().size(); i++){
         if(i==card.getNegativeAssociations().size()-1){
            list+="and " + card.getNegativeAssociations()[i] + ".";
         }
         else{
            if(card.getNegativeAssociations().size()>2){
            list+=card.getNegativeAssociations()[i] + ", ";
            }
            else{
                list+=card.getNegativeAssociations()[i] + " ";
            }
         }
      }
      presentReading = "Your card was " + card.getName() + ". Currently, you suffer from " + list;
      presentReading+="\nLooks like someone needs a change.";
   }
   else{
      for(int i = 0; i < card.getPositiveAssociations().size(); i++){
         if(i==card.getPositiveAssociations().size()-1){
            list+="and " + card.getPositiveAssociations()[i] + ".";
         }
         else{
            if(card.getPositiveAssociations().size()>2){
            list+=card.getPositiveAssociations()[i] + ", ";
            }
            else{
                list+=card.getPositiveAssociations()[i] + " ";
            }
         }
      }
      presentReading = "Your card was " + card.getName() + ". Right now, you live a life of " + list;
      presentReading+="\nNot bad.";
   }
}

void Diviner::setFutureReading(Card card){
   string list = "";
   if(card.getReversed()){
      for(int i = 0; i < card.getNegativeAssociations().size(); i++){
         if(i==card.getNegativeAssociations().size()-1){
            list+="and " + card.getNegativeAssociations()[i] + ".";
         }
         else{
            if(card.getNegativeAssociations().size()>2){
            list+=card.getNegativeAssociations()[i] + ", ";
            }
            else{
                list+=card.getNegativeAssociations()[i] + " ";
            }
         }
      }
      futureReading = "Your card was " + card.getName() + ". Your future holds " + list;
      futureReading+="\nBeware, or suffer the consequences.";
   }
   else{
      for(int i = 0; i < card.getPositiveAssociations().size(); i++){
         if(i==card.getPositiveAssociations().size()-1){
            list+="and " + card.getPositiveAssociations()[i] + ".";
         }
         else{
            if(card.getPositiveAssociations().size()>2){
            list+=card.getPositiveAssociations()[i] + ", ";
            }
            else{
                list+=card.getPositiveAssociations()[i] + " ";
            }
         }
      }
      futureReading = "Your card was " + card.getName() + ".Your future is clear, with " + list;
      futureReading+="\nDon't, as you humans say, \"screw it up.\"";
   }
}

string Diviner::getPastReading(){
   return pastReading;
}

string Diviner::getPresentReading(){
   return presentReading;
}

string Diviner::getFutureReading(){
   return futureReading;
}

Diviner::~Diviner()
{
    //dtor
}
