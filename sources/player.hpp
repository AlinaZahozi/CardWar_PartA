#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace ariel{

    class Player {
    private:  
        string player_name;
        int player_number;

    public:
        static int count; 
        // Constructor
        Player(string);

        // Getters 
        string get_player_name(){
             return player_name;
        }

        int get_player_number(){
             return player_number;
        }

        // Setter
        void set_player_name(string);

        // To string
        string to_string();

        // Methods
        int stacksize();
        int cardeTaken();
    };

}