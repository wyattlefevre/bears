#pragma once
#include "Food.h"

class Fish : public Food {
private:
    int size;
public:
    int getSize(){ return size; }
    void grow();
};