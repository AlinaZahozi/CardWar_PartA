#include <iostream>
#include <string>
#include "player.hpp"
using namespace std;


namespace ariel{

    int Player::count = 0;

    // Constructor
    Player::Player(string name) {
        this->player_name = name;
        this->player_number = Player::++count;
    }

    // Setter
    void Player::set_player_name(string name) {
        this->player_name = name;
    }

    // To string
    string Player::to_string() {
        return "Player #"+std::to_string(player_number)+ " is " + this->player_name;
    }

    int Player::stacksize(){
        return 0;
    }

    int Player::cardeTaken(){
        return 0;
    }

}