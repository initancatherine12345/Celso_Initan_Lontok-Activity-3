#include <iostream>

using namespace std;

// start of the program
int main()
{
    float gpa;
    int hours, exAct;

    cout << "Welcome to SCHOLARSHIP ELIGIBILITY CHECKER!" << endl << endl;

    // input GPA
    cout << "Enter GPA: ";
    cin >> gpa;

    // input hours
    cout << "Enter completed credit hours: ";
    cin >> hours;

    // input numbers of extracurriculars
    cout << "Enter the number of extracurricular activities: ";
    cin >> exAct;

    //compound statement (if, elseif,else)
    if (gpa <= 1.25 && hours == 40) {
        cout << "The student is eligible for the University Scholarship." << endl;
    }
    else if (gpa <= 2.0 && hours == 30 && exAct >= 2) {
        cout << "The student is eligible for the College Scholarship." << endl;
    }
    else if (gpa <= 2.5 && hours == 20 && exAct >= 1) {
        cout << "The student is eligible for the Leadership Scholarship." << endl;
    }
    else {
        cout << "The student is not qualified for any scholarship." << endl;
    }

    // End of the program
    cout << "End of the program, thank you 🙂 " << endl;

    return 0;

}
