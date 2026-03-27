#include "TeachingAssistant.h"
#include <iostream>
using namespace std;

TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa,
                                     double salary, AccessCard card, int workingHours)
    : UniversityMember(name, memberID),
      Student(name, memberID, cgpa),
      Staff(name, memberID, salary, card) {
    this->workingHours = workingHours;     //number of working hours per week
}

void TeachingAssistant::displayRole() {
    cout << "Role: Teaching Assistant" << endl;
}

void TeachingAssistant::gradeAssignment(int score) {
    cout << "Graded using numeric score: " << score << "/100" << endl;
}

void TeachingAssistant::gradeAssignment(string letterGrade) {
    cout << "Graded using letter grade: " << letterGrade << endl;
}