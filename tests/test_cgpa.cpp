#include <iostream>
#include "CGPACalculator.h"

using namespace std;

int main()
{
    CGPACalculator calculator;

    cout << "===== CGPACalculator Tests =====" << endl;

    // Test empty calculator...
    cout << "\n--- Empty Calculator Test ---" << endl;
    calculator.displayResults();

    // Add courses...
    Course course1("C++", 3.0, "A", 3.75);
    Course course2("Java", 3.0, "A+", 4.00);
    Course course3("Mathematics", 1.5, "B", 3.25);

    calculator.addCourse(course1);
    calculator.addCourse(course2);
    calculator.addCourse(course3);

    // Display results...
    cout << "\n--- Course Results Test ---" << endl;
    calculator.displayResults();

    return 0;
}