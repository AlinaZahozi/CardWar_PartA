#include <iostream>
#include <string>
#include <cctype>
#include "card.hpp"
using namespace std;


namespace ariel{

    int Card::number_of_cards = 0;

    // Constructor
    Card::Card(string typ , string val){
        this->card_type = typ;
        this->card_value = val;
        Card::number_of_cards++;
    }

    int Card::calculate_card_value(){
        string val = this->card_value;
        for (char& c : val) {
            c = tolower(c);
        }
        switch (val) {
            case 'ace':
                value = 1;
                break;
            case 'two':
                value = 2;
                break;
            case 'three':
                value = 3;
                break;
            case 'four':
                value = 4;
                break;
            case 'five':
                value = 5;
                break;
            case 'six':
                value = 6;
                break;
            case 'seven':
                value = 7;
                break;
            case 'eight':
                value = 8;
                break;
            case 'nine':
                value = 9;
                break;
            case 'ten':
                value = 10;
                break;
            case 'jack':
                value = 11;
                break;    
            case 'queen':
                value = 12;
                break;
            case 'king':
                value = 13;
                break;
            default:
                value = 0;
                break;
        }
    }


    // To string
    string Card::to_string(){
        return "Card";
    }

}