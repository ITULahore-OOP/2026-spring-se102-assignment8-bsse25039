#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name, int memberID, double cgpa)
    : UniversityMember(name, memberID) {
    this->cgpa = cgpa;
}

double Student::getCGPA() {
    return cgpa;                         //student cgpa
}

void Student::updateCGPA(double newCGPA) {   //update cgpa
    cgpa = newCGPA;
}

void Student::displayRole() {
    cout << "Role: Student" << endl;
}