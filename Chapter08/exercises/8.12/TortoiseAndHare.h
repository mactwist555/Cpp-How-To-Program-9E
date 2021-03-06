/*
 * =====================================================================================
 *
 *       Filename:  TortoiseAndHare.h
 *
 *    Description:  Exercise 8.12 - Simulation: The Tortoise and the Hare
 *
 *        Version:  1.0
 *        Created:  06/05/16 17:49:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <ctime>
#include <iostream>
#include <string>

struct participant {
    std::string name;
    unsigned int position;

    participant() : position(1) {}
};

enum class GameStates { PLAY, EXIT };

class TortoiseAndHare {
 private:
    static const size_t COURSE_LIMIT = 70;

    participant _tortoise;
    participant _hare;

    GameStates _gameState;

    void initialise();
    void moveTortoise(participant &);
    void moveHare(participant &);
    bool isWinner(participant &);
    void printProgress();
    void summarise();
    void reset();

 public:
    TortoiseAndHare() : _gameState(GameStates::PLAY) {}

    ~TortoiseAndHare() {}

    void go();
};
