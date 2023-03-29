#pragma once
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
using namespace ariel;


TEST_CASE("Test 1-Test Player class constructor") {
    Player p("alina");
    CHECK(p.get_player_name() == "alina");
    CHECK(p.get_is_availible() == true);
    CHECK(p.get_num_of_taken_cards() == 0);
}


TEST_CASE("Test 2-Test Player class constructor with illegal string") {
    CHECK_THROWS(Player p("39!@0"));
}


TEST_CASE("Test 3-Test Player class method stacksize()") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    for (int i=0;i<7;i++) {
     game.playTurn();
    }
    CHECK(p1.stacksize() == p2.stacksize());
}

TEST_CASE("Test 4-Test Player class method stacksize()") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK(p1.stacksize() == 0 || p2.stacksize() == 0);
}

TEST_CASE("Test 5-Test Player class method cardeTaken()") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playTurn();
    CHECK((p1.cardeTaken() + p2.cardeTaken()) >= 1);
}

TEST_CASE("Test 6-Test Player class method cardeTaken()") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK(p1.cardeTaken() == 26 || p2.cardeTaken() == 26);
}

TEST_CASE("Test 7-Test Game class constructor") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2);
    CHECK(game.get_log() == "");
    CHECK(game.get_number_of_draws() == 0);
}


TEST_CASE("Test 8-Test Game class constructor with unavailible player") {
    Player p1("Alina");
    Player p2("Alin");
    p1.set_is_availible(false);
    CHECK_THROWS(Game game(p1,p2));
}


TEST_CASE("Test 9-Test Game class method playTurn()") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    for (int i=0;i<7;i++) {
     CHECK_NOTHROW(game.playTurn());
    }
    CHECK_NOTHROW(game.playTurn());
}

TEST_CASE("Test 10-Test Game class method playTurn() after finishing the game") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK_THROWS(game.playTurn());
}

TEST_CASE("Test 11-Test Game class method playAll()") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK(game.get_log() != "");
    CHECK((p1.get_total_wins() + p2.get_total_wins()) >= 1);
    
}

TEST_CASE("Test 12-Test Game class method playAll() after finishing the game") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK_NOTHROW(game.playAll());
}

TEST_CASE("Test 13-Test Game class method printLastTurn()") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK_NOTHROW(game.printLastTurn());
}

TEST_CASE("Test 14-Test Game class method printLastTurn()") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    for (int i=0;i<7;i++) {
     game.playTurn();
    }
    CHECK_NOTHROW(game.printLastTurn());
}

TEST_CASE("Test 15-Test Game class method printWiner() befor game finish") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    CHECK_THROWS(game.printWiner());
}

TEST_CASE("Test 16-Test Game class method printWiner() after game finish") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK_NOTHROW(game.printWiner());
}

TEST_CASE("Test 17-Test Game class method printLog() befor any turn was performed") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    CHECK_NOTHROW(game.printLog());
}

TEST_CASE("Test 18-Test Game class method printLog() after game finish") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK_NOTHROW(game.printLog());
}

TEST_CASE("Test 19-Test Game class method printStats() befor any turn was performed") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    CHECK_NOTHROW(game.printStats());
}

TEST_CASE("Test 20-Test Game class method printStats() after game finish") {
    Player p1("Alina");
    Player p2("Alin");
    Game game(p1,p2); 
    game.playAll();
    CHECK_NOTHROW(game.printStats());
}