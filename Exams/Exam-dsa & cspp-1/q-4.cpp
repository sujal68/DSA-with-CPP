#include <iostream>
using namespace std;

main()
{
    int marks;
    char grade;

    cout << "Enter Marks : ";
    cin >> marks;

    grade = (marks >= 91 && marks <= 100) ? 'A' : (marks >= 81 && marks <= 90) ? 'B'
                                              : (marks >= 71 && marks <= 80)   ? 'C'
                                              : (marks >= 61 && marks <= 70)   ? 'D'
                                              : (marks >= 51 && marks <= 60)   ? 'E'
                                              : (marks >= 33 && marks <= 50)   ? 'F'
                                              : (marks >= 0 && marks <= 32)    ? 'G'
                                                                               : 'H';

    cout << endl
         << "Grade = " << grade << endl;

    switch (grade)
    {
    case 'A':
        cout << "Excellent work!." << endl;
        break;
    case 'B':
        cout << "Well done.." << endl;
        break;
    case 'C':
        cout << "Good job.." << endl;
        break;
    case 'D':
        cout << "You Passed, but you could do better..." << endl;
        break;
    case 'F':
        cout << "You are just passed..." << endl;
        break;
    case 'E':
        cout << "Sorry, you failed" << endl;
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    }
    else if (grade == 'E' || grade == 'G')
    {
        cout << "Please try again next time." << endl;
    }
    else if (grade == 'H')
    {
        cout << "Invalid Marks Entered!" << endl;
    }
}
