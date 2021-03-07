#ifndef CARD_H
#define CARD_H
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

class Card
{
    public:
        Card();
        virtual ~Card();
        string getName();
        int getNumber();
        string getNegativeAssociationsToString();
        string getPositiveAssociationsToString();
        vector <string> getNegativeAssociations();
        vector <string> getPositiveAssociations();
        void writeFortune();
        string to_string();
        bool getReversed();

    private:
        int cardNumber;
        string name;
        bool reversed;
        void setAssociations(string file);
        vector <string> positiveAssociations;
        vector <string> negativeAssociations;
};

#endif // CARD_H
