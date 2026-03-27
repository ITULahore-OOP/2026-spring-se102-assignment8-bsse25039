#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <string>
using namespace std;

class UniversityMember {
private:
    string name;       //store member name
    int memberID;    //unique id for each member

public:

  //parameterized constructor
    UniversityMember(string name, int memberID);
   //virtual destructor
    virtual ~UniversityMember();

    string getName();    //getter for name
    int getMemberID();           //getter for member id

    virtual void displayRole() = 0;
};

#endif