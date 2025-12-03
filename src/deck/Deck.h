#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include "../card/Card.h"
#include <stack>
using namespace std;


class Deck{
    public:
        // constructor
        Deck(int numDecks, int cardsLeft,int shufflePoint);

        Deck shuffle(); 

        Card dealCard();

        void printDeck();

        

    private:
        int numDecks;
        int cardsLeft;
        int shufflePoint;
        std::stack<Card> cards;
        
};

#endif