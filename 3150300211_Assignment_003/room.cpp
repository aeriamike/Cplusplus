#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdlib>
#include <time.h>
#include "room.h"

using namespace std;

Room::Room(string name, vector<string> exitNames, bool safe):
    name(name){

    srand(time(NULL));

    if(safe){
        princess = monster = false; // The safe flag remains true, meaning neither
        							// the princess nor monster is in this room
    }else{
        princess = (0 == rand()%5); // If the safe flag becomes false, then this room
        monster = (0 == rand()%5);  // is not empty. The probability of the princess
        							// or the monster staying in this room are equal,
        							// with 50%
    }

    vector<string>::iterator it;
    for(it = exitNames.begin(); it != exitNames.end(); it++){
        if(0 != rand()%3)
            exitMap[*it] = NULL; // 2/3 is the probability
    }
}

Room::~Room(){

    cout << "Room: " << name << " gone" << endl;
}


bool Room::hasPrincess(){
    
    return princess;
}

bool Room::hasMonster(){

    return monster;
}

bool Room::existExit(string exitName){

    return 1 == exitMap.count(exitName);
}

Room *Room::goExit(string exitName){

    return exitMap[exitName]; //it's dangerous, it must after existExit()
}

void Room::printInfo(){

    cout << "Welcome to Room "
        << name << "." <<endl;
    cout << "There are " << exitMap.size()
        << " exits as: ";

    map<string, Room*>::iterator it;
    for(it = exitMap.begin(); it != exitMap.end(); it++){
        cout << (*it).first << " ";
    }
    cout << endl;

    cout << "Please enter your command: ";
}


void Room::setExit(string exitName, Room *room){

    exitMap[exitName] = room; //dangerous and after existExit()
}
