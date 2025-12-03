/*
TO RUN THIS CODE:

# compile
g++ -std=c++17 -O2 -Wall -Wextra -g -o src/main.exe src/main.cpp

# run
.\src\main.exe

*/


#include <iostream>
#include <string>

using namespace std;

int main() {
  
    string welcome_string = "Welcome to Blackjack\n";
    cout << welcome_string;

    int buy_in;
    cout << "Enter your buy-in amount: ";
    cin >> buy_in;
    cout << "You have bought in for $" << buy_in << "\n";

    // build rest of game here

    return 0;
}