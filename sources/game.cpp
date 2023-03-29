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
    cout << "ToDo";
}

void printLastTurn(){
    cout << "ToDo";
}

void playAll(){
    cout << "ToDo";
}

void printWiner(){
    cout << "ToDo";   
}

void printLog(){
    cout << "ToDo";  
}

void printStats(){
    cout << "ToDo";    
}

void add_to_log(string){
    cout << "ToDo";   
}


}