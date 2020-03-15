#pragma once
#include <string>

using std::string;

class Bear{
private:
    int age;
    int size;
    string name;
public:
    const int MAX_SIZE = 5;
    Bear(string name);
    int getAge(){ return age; }
    string getName(){ return name; }
    int getSize(){ return size; }

};