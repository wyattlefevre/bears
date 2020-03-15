#include "Berry.h"

Berry::Berry(){
    age = 0;
    foodPoints = 3;
}

bool Berry::isGrown(){
    if(this->age >= GROWN){
        return true;
    }
    return false;
}

void Berry::grow(){
    age++;
}