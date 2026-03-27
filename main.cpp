#include <iostream>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main() {

    cout << "===== SMART UNIVERSITY SYSTEM =====\n\n";

    // Create Access Cards

          AccessCard card1("AC-101", 1);
       AccessCard card2("AC-202", 2);

    // Create Members

       Student s1("Iqra", 1, 3.8);
        Staff st1("Umar", 2, 50000, card1);
    TeachingAssistant ta1("Ali", 3, 3.9, 20000, card2, 15);

    // Department

       Department dept("Software Engineering");

           dept.addMember(&s1);
              dept.addMember(&st1);
            dept.addMember(&ta1);

    cout << "=== Display Roles (Run-Time Polymorphism) ===\n";
            dept.displayAllRoles();

        cout << "\n Compile-Time Polymorphism \n";
      ta1.gradeAssignment(95);
                ta1.gradeAssignment("A+");

      cout << "\n Tutoring Sessions \n";
          TutoringSession ts1(1, 40, &ta1, &s1);
             TutoringSession ts2(2, 35, &ta1, &s1);

       TutoringSession merged = ts1 + ts2;

    cout << "Merged Duration: " << merged.getDuration() << endl;

    if (ts1 > ts2)
          cout << "Session 1 is longer\n";
       else
        cout << "Session 2 is longer\n";

       cout << "\n===== END =====\n";

           return 0;
}