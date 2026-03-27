#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "UniversityMember.h"

class Department {
private:
    string departmentName;     //department name
    UniversityMember* members[50];    //array of base class pointer
    int memberCount;   //track number of members

public:
//constructor
    Department(string departmentName);
        //add member to the department 
    void addMember(UniversityMember* member);
    void displayAllRoles();
};

#endif