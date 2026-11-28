#include <iostream>
#include <iomanip>
#include <cstddef>
#include "CGPACalculator.h"

void CGPACalculator::addCourse(const Course& course)
{
    courses.push_back(course);
}

int CGPACalculator::getTotalCourses() const
{
    return static_cast<int>(courses.size());
}

double CGPACalculator::getTotalCredits() const
{
    double totalCredits = 0.0;

    for (std::size_t i = 0; i < courses.size(); i++)
    {
        totalCredits += courses[i].getCreditHours();
    }

    return totalCredits;
}

double CGPACalculator::calculateCGPA() const
{
    double totalGradePoints = 0.0;
    double totalCredits = 0.0;

    for (std::size_t i = 0; i < courses.size(); i++)
    {
        totalGradePoints += courses[i].getCreditHours() * courses[i].getGradePoint();

        totalCredits += courses[i].getCreditHours();
    }

    if (totalCredits == 0.0)
    {
        return 0.0;
    }
        

    return totalGradePoints / totalCredits;
}

void CGPACalculator::displayResults() const
{
    if (courses.empty())
    {
        std::cout << "No courses added." << std::endl;
        return;
    }

    std::cout << "\n===== CGPA Calculation Results =====\n";

    for (std::size_t i = 0; i < courses.size(); i++)
    {
        std::cout << "\nCourse " << i + 1 << ":\n";
        courses[i].displayCourse();
    }

    std::cout << "\nTotal Courses: " << getTotalCourses() << std::endl;
    std::cout << "Total Credits: " << getTotalCredits() << std::endl;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "CGPA: " << calculateCGPA() << std::endl;
}