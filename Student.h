#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityMember.h"

class Student : virtual public UniversityMember {
private:
    double cgpa;    //student's cgpa

public:
    Student(string name, int memberID, double cgpa);

    double getCGPA();    //getter for cgpa
    void updateCGPA(double newCGPA);     //update cgpa

    void displayRole() override;
};

#endif