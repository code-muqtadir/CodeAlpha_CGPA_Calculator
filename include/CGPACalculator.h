
#ifndef CGPA_CALCULATOR_H
#define CGPA_CALCULATOR_H

#include <vector>
#include "Course.h"

class CGPACalculator
{
private:
    std::vector<Course> courses;

public:
    void addCourse(const Course& course);

    double calculateCGPA() const;

    double getTotalCredits() const;

    int getTotalCourses() const;

    void displayResults() const;
};

#endif
