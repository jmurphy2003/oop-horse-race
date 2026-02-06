#ifndef RACE_H
#define RACE_H

#include "Horse.h"

class Race {
private:
    const static int NUM_HORSES = 5;
    int trackLength;
    Horse horses[NUM_HORSES];

public:
    Race(int trackLength);
    void run();
};

#endif