#include <iostream>
#include <string>
#include "card.hpp"
using namespace std;


namespace ariel{

    // Constructor
    Card::Card(string typ , int val){
        this->card_type = typ;
        this->card_value = int;
    }

    // To string
    string Card::to_string(){
        return "Card";
    }

}