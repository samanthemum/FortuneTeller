#include <iostream>
#include "DIVINER.H"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    Diviner xerox;

    cout<<"Press enter to draw a card to represent your past.";
    cin.ignore();
    cout<<"Drawing card, please wait.\n\n";
    Card past;
    xerox.setPast(past);
    this_thread::sleep_for(chrono::seconds(1));

    cout<<"Press enter to draw a card to represent your present.";
    cin.ignore();
    cout<<"Drawing card, please wait.\n\n";
    this_thread::sleep_for(chrono::seconds(1));
    Card present;
    xerox.setPresent(present);

    cout<<"Press enter to draw a card to represent your future.";
    cin.ignore();
    cout<<"Drawing card, please wait.\n\n";
    this_thread::sleep_for(chrono::seconds(1));
    Card future;
    xerox.setFuture(future);

    cout<<xerox.getPastReading()+"\n\n";
    cout<<xerox.getPresentReading()+"\n\n";
    cout<<xerox.getFutureReading()+"\n\n";
    cin.ignore();
}


