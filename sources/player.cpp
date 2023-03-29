#include <iostream>
#include <string>
#include "player.hpp"
#include "card.hpp"
using namespace std;


namespace ariel{

    int Player::total_wins = 0;

    // Constructor
    Player::Player(string name) {
        this->player_name = name;
    }

    // Getters 
    string Player::get_player_name(){
        return this->player_name;
    }

    int Player::get_player_number(){
         return this->player_number;
    }

    stack<Card> Player::get_cards(){
        return this->cards;
    }

    int Player::get_num_of_taken_cards(){
        return this->num_of_taken_cards;
    }

    string Player::get_cards_won(){
        return this->cards_won;
    }

    // Setter
    void Player::set_player_name(string name) {
        this->player_name = name;
    }

    void Player::set_is_availible(bool b){
        this->is_availible = b;
    }

    // To string
    string Player::to_string() {
        return "Player ";
    }

    int Player::stacksize(){
        return 0;
    }

    int Player::cardeTaken(){
        return 0;
    }

}