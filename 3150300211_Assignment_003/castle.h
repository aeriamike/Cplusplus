

#ifndef CASTLE_H
#define CASTLE_H

#include <string>
#include <vector>

#include "room.h"

using namespace std;

class Castle {

public:
    Castle();
    ~Castle();

private:
    vector<Room*> rooms;
    bool princess = false; 

public:
    Room *addRoom(string name);
    void printInfo();
    void run();

//static functions and variables
private:
    string static oppoExit(string exitName);
    vector<string> static exitNames;
};

#endif //CASTLE_H
