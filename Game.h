#pragma once
#include <vector>
#include "Fish.h"
#include "Berry.h"
#include "Bear.h"

using std::vector;

class Game {
private:
    int coins;
    vector<Fish> pond;
    vector<Berry> garden;
    vector<Bear> herd;
public:
    void runGame();
};