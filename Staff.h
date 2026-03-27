#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"

class Staff : virtual public UniversityMember {
private:
    double salary;
    AccessCard card;    //staff has acess card

public:
    Staff(string name, int memberID, double salary, AccessCard card);

    double getSalary();    //getter for salary

    void displayRole() override;
    void displayCard();
};

#endif