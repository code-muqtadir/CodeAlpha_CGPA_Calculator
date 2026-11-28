#include "CGPACalculator.h"

void CGPACalculator::addCourse(const Course& course)
{
    courses.push_back(course);
}

int CGPACalculator::getTotalCourses() const
{
    return static_cast<int>(courses.size());
}