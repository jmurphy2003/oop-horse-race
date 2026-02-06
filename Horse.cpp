#include <iostream>
#include <cstdlib>
#include "Horse.h"

using namespace std;

Horse::Horse() : id(0), position(0) {}

Horse::Horse(int id) : id(id), position(0) {}

void Horse::advance(int trackLength) {
    int coin = rand() % 2;
    if (coin == 1 && position < trackLength - 1) {
        position++;
    }
}

void Horse::printLane(int trackLength) const {
    for (int i = 0; i < trackLength; i++) {
        if (i == position) {
            cout << id;
        } else {
            cout << ".";
        }
    }
    cout << endl;
}

bool Horse::isWinner(int trackLength) const {
    return position == trackLength - 1;
}