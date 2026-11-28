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