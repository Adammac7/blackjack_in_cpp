#include "GameObject.h"
#include <iostream> 
#include <string>


// main game goes hereS
GameObject::GameObject(int money, int min_bet) : name("player1"), money(money), min_bet(min_bet) {}

void GameObject::game(){

     cout << "You have $" << money << " and " << min_bet << " is the minimum bet.\n";

}