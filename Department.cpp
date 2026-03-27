#include "Department.h"
#include <iostream>
using namespace std;

Department::Department(string departmentName) {
    this->departmentName = departmentName;     //depatment
    memberCount = 0;
}

void Department::addMember(UniversityMember* member) {
    members[memberCount++] = member;
}

void Department::displayAllRoles() {        //department roles
    for (int i = 0; i < memberCount; i++) {
        members[i]->displayRole();
    }
}