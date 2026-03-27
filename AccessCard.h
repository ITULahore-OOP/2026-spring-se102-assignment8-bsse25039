#ifndef ACCESSCARD_H
#define ACCESSCARD_H

#include <string>
using namespace std;

class AccessCard {
private:
    string cardID;       // unique card identifiers
    int accessLevel;    //acess level

public:
    //constructor with default  values
    AccessCard(string cardID = "", int accessLevel = 0);

    string getCardID();     // getter for card id
    int getAccessLevel();     //getter for acess level

    void displayCardInfo();    //display the crad information
};

#endif