#include <iostream>
#include <string>
#include "game.hpp"
#include "player.hpp"
using namespace std;


namespace ariel{

    // Constructor
    Game::Game(Player p1 ,Player p2){
       
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
        
    }

    void Game::set_second_player(Player){

    }

    // To string
    string Game::to_string(){
        return "Game";
    }


    // Methods
    void playTurn(){
        
    }

    void printLastTurn(){
        
    }

    void playAll(){
        
    }

    void printWiner(){
        
    }

    void printLog(){
        
    }

    void printStats(){
        
    }

    void add_to_log(string){
        
    }

}