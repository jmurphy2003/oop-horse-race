#ifndef HORSE_H
#define HORSE_H

class Horse {
private:
    int id;
    int position;

public:
    Horse();
    Horse(int id);
    void advance(int trackLength);
    void printLane(int trackLength) const;
    bool isWinner(int trackLength) const;
};

#endif