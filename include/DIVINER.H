#ifndef DIVINER_H
#define DIVINER_H
#include "CARD.H"


class Diviner
{
    public:
        Diviner();
        virtual ~Diviner();
        void setPast(Card card);
        void setPresent(Card card);
        void setFuture(Card card);
        string getPastReading();
        string getPresentReading();
        string getFutureReading();

    private:
        Card past;
        Card present;
        Card future;
        void setPastReading(Card card);
        void setPresentReading(Card card);
        void setFutureReading(Card card);
        string pastReading;
        string presentReading;
        string futureReading;
};

#endif // DIVINER_H
