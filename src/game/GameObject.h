#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include <string>
using namespace std;


class GameObject{
    public:
        // constructor
        GameObject(int money,int min_bet);

        void game();

        

    private:
        string name;
        int money;
        int min_bet;
        
};

#endif