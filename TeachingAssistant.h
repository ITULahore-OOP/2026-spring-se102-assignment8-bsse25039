#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include "Student.h"
#include "Staff.h"

class TeachingAssistant : public Student, public Staff {
private:
    int workingHours;   //number of working hours per week

public:
    TeachingAssistant(string name, int memberID, double cgpa,
                      double salary, AccessCard card, int workingHours);

    void displayRole() override;

    void gradeAssignment(int score);   //number grading
    void gradeAssignment(string letterGrade);   //letter grading
};

#endif