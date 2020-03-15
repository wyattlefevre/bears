#pragma once
#include "Food.h"

class Berry : public Food {
private:
    int age;
public:
    const int GROWN = 3;
    Berry();
    bool isGrown();
    int getAge();
    void grow();
};