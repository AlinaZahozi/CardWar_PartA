#include <iostream>
#include <string>
#include "game.hpp"
#include "player.hpp"
using namespace std;


namespace ariel{

    // Constructor
    Game::Game(Player p1 ,Player p2){
        this->first_player = p1;
        this->second_player = p2; 
        this->log = "";
        this->number_of_draws = 0;
    }

    // Getters 
    Player Game::get_first_player(){
        return this->first_player;
    }

    Player Game::get_second_player(){
        return this->second_player;
    }

    string Game::get_log(){
        return this->log;
    }

    int Game::get_number_of_draws(){
        return this->number_of_draws;
    }
        

    // Setter
    void Game::set_first_player(Player){
        return 0;
    }

    void sGame::et_second_player(Player){
        return 0;
    }

    // To string
    string Game::to_string(){
        return "Game";
    }


    // Methods
    void playTurn(){
        return 0;
    }

    void printLastTurn(){
        return 0;
    }

    void playAll(){
        return 0;
    }

    void printWiner(){
        return 0;
    }

    void printLog(){
        return 0;
    }

    void printStats(){
        return 0;
    }

    void add_to_log(string){
        return 0;
    }

}