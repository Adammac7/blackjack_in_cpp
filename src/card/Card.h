#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
using namespace std;


class Card{
    public:
        // constructor
        Card(char type, int value, bool isAce);

        int getValue();
        char getType();
        bool getIsAce();
        

    private:
        char type;
        int value;
        bool isAce;
        
        
};

#endif