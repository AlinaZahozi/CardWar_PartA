#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace ariel{

    class Game {
    private:   
        

    public:
        // Constructor
        Game(Player p1 ,Player p2);

        // Getters 
        

        // Setter
        

        // To string
        string to_string();

        // Methods
        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
    };

}