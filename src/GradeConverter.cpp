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


std::string GradeConverter::percentageToLetterGrade(double percentage) const
{
    if (percentage < 0 || percentage > 100)
        return "";

    if (percentage >= 90)
        return "A+";
    else if (percentage >= 85)
        return "A";
    else if (percentage >= 80)
        return "B+";
    else if (percentage >= 75)
        return "B";
    else if (percentage >= 70)
        return "C+";
    else if (percentage >= 65)
        return "C";
    else if (percentage >= 60)
        return "D+";
    else if (percentage >= 50)
        return "D";
    else
        return "F";
}