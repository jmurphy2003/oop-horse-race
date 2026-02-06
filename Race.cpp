#include <iostream>
#include <string>
#include "Race.h"

using namespace std;

Race::Race(int trackLength) : trackLength(trackLength) {
    for (int i = 0; i < NUM_HORSES; i++) {
        horses[i] = Horse(i);
    }
}

void Race::run() {
    bool raceOver = false;
    string dummy;

    for (int i = 0; i < NUM_HORSES; i++) {
        horses[i].printLane(trackLength);
    }

    while (!raceOver) {
        cout << "Press enter for another turn";
        getline(cin, dummy);

        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].advance(trackLength);
        }

        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].printLane(trackLength);
        }

        for (int i = 0; i < NUM_HORSES; i++) {
            if (horses[i].isWinner(trackLength)) {
                cout << "..............." << endl;
                cout << "Horse " << i << " WINS!!!" << endl;
                raceOver = true;
            }
        }
    }
}