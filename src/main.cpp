
#include <iostream>
#include <string>
#include <limits>

#include "Course.h"
#include "GradeConverter.h"
#include "CGPACalculator.h"

using namespace std;


int main()
{
    GradeConverter converter;
    CGPACalculator calculator;

    int numberOfCourses;

    cout << "===== CGPA Calculator =====" << endl;

    cout << "Enter number of courses: ";

    while (!(cin >> numberOfCourses) || numberOfCourses <= 0)
    {
        cout << "Invalid input! Enter a positive number: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nNumber of courses: " << numberOfCourses << endl;

    for (int i = 0; i < numberOfCourses; i++)
    {
        string courseName;
        double creditHours;

        cout << "\n===== Course " << i + 1 << " =====" << endl;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter course name: ";
        getline(cin, courseName);

        while (courseName.find_first_not_of(" \t") == string::npos)
        {
            cout << "Course name cannot be empty! Enter again: ";
            getline(cin, courseName);
        }

        cout << "Enter credit hours: ";
        while(!(cin >> creditHours) || creditHours <= 0)
        {
            cout << "Invalid input! Enter a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    int gradeChoice;
    string letterGrade;
    double percentage;
    double gradePoint;
    string finalGrade;

    cout << "\nSelect Grade Input Method:" << endl;
    cout << "1. Letter Grade (A+, A, B+, etc.)" << endl;
    cout << "2. Percentage (0-100)" << endl;

    cout << "Enter your choice: ";

    while (!(cin >> gradeChoice) || (gradeChoice != 1 && gradeChoice != 2))
    {
        cout << "Invalid choice! Enter 1 or 2: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

         
    if (gradeChoice == 1)
    {
        cout << "Enter letter grade (A+, A, B+, B, etc.): ";
    

    while (!(cin >> letterGrade) || (gradePoint = converter.letterToGradePoint(letterGrade)) < 0)
    {
        cout << "Invalid letter grade! Try again: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

        finalGrade = letterGrade;
    }

    else
    {
        cout << "Enter percentage (0-100): ";
    

    while (!(cin >> percentage) || percentage < 0 || percentage > 100)
    {
        cout << "Invalid percentage! Enter a value between 0 and 100: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    finalGrade = converter.percentageToLetterGrade(percentage);
    gradePoint = converter.percentageToGradePoint(percentage);
    
    }

    cout << "\nGrade: " << finalGrade << endl;
    cout << "Grade Point: " << gradePoint << endl;

    Course course(courseName, creditHours, finalGrade, gradePoint);

    calculator.addCourse(course);

    cout << "\nCourse added successfully!" << endl;

    }

    cout << "\n\nAll courses have been added!" << endl;

    calculator.displayResults();

    return 0;
}
