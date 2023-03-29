#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace ariel{

    class Card {
    static int number_of_cards;
    const string card_type;
    const int card_value;
  
    public:
        // Constructor
        Card(string,int);

        // Getters 
        int get_number_of_cards(){
            return number_of_cards;
        }

        string get_card_type(){
            return card_type;
        }

        int get_card_value(){
            return card_value;
        }

        // To string
        string to_string();
    };

}