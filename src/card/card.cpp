#include "Card.h"

Card::Card(char type, int value, bool isAce) : type(type), value(value), isAce(isAce) {} 

int Card::getValue(){
    return value;
}
char Card::getType(){
    return type;
}
bool Card::getIsAce(){
    return isAce;
}

