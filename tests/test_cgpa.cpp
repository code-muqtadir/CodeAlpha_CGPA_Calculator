#include <iostream>
#include "CGPACalculator.h"

using namespace std;

int main()
{
    CGPACalculator calculator;

    cout << "===== addCourse() Test =====" << endl;

    cout << "Initial courses: " << calculator.getTotalCourses() << endl;

    Course course1("C++", 3.0, "A", 3.75);
    Course course2("Java", 3.0, "A+", 4.00);

    calculator.addCourse(course1);
    calculator.addCourse(course2);

    cout << "Courses after adding: "<< calculator.getTotalCourses() << endl;

    return 0;
}