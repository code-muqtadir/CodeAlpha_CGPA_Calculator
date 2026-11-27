#include "GradeConverter.h"

double GradeConverter::letterToGradePoint(const std::string& letterGrade) const
{
    if (letterGrade == "A+")
        return 4.00;
    else if (letterGrade == "A")
        return 3.75;
    else if (letterGrade == "B+")
        return 3.50;
    else if (letterGrade == "B")
        return 3.25;
    else if (letterGrade == "C+")
        return 3.00;
    else if (letterGrade == "C")
        return 2.75;
    else if (letterGrade == "D+")
        return 2.50;
    else if (letterGrade == "D")
        return 2.25;
    else if (letterGrade == "F")
        return 0.00;
    else
        return -1.0;
}

