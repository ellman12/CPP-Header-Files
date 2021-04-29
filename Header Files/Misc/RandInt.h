#ifndef RANDINT_H
#define RANDINT_H
#include <iostream>

//Generate a random number between min and max
int randInt(int min, int max)
{
    return std::rand() % (max + 1 - min) + min;
}
#endif