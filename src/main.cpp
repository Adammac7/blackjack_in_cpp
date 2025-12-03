/*
TO RUN THIS CODE:

# compile
g++ -std=c++17 -O2 -Wall -Wextra -g -o src/main.exe src/main.cpp src/game/game.cpp

# run
.\src\main.exe

*/


#include <iostream>
#include <string>
#include "game/GameObject.h"


using namespace std;

int main() {
  
    string welcome_string = "Welcome to Blackjack\n";
    cout << welcome_string;

    int buy_in;

    cout << "Enter your buy-in amount: ";
    cin >> buy_in;
    cout << "You have bought in for $" << buy_in << "\n";

    int min_bet = buy_in / 10;

    // build rest of game here

    cout << "This game will be the standard version of blackjack.\n";
    cout << "The dealer hits on soft 17 & blackjack pays 3 : 2\n";
    cout << "The game will be played with 4 decks.\n";
    cout << "The minimum bet is $" << min_bet << "\n";
    cout << "Good luck!\n";

    // main game
    int player_money = buy_in;
    GameObject player(player_money, min_bet);
    player.game();
    
    



    return 0;
}