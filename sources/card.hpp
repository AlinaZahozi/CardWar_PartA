#pragma once
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

namespace ariel{

    class Card {
    static int number_of_cards;
    const string card_type;
    const string card_value;
  
    public:
        // Constructor
        Card(string,string);

        // Getters 
        int get_number_of_cards(){
            return number_of_cards;
        }

        string get_card_type(){
            return card_type;
        }

        string get_card_value(){
            return card_value;
        }

        int calculate_card_value();


        // To string
        string to_string();
    };

}