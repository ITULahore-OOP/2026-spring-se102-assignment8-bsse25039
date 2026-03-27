#include "UniversityMember.h"

UniversityMember::UniversityMember(string name, int memberID) {
    this->name = name;      //store member name
    this->memberID = memberID;     //unique id for each member
}

UniversityMember::~UniversityMember() {}

string UniversityMember::getName() {
    return name;
}

int UniversityMember::getMemberID() {
    return memberID;
}