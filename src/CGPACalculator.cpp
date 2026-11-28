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