
#ifndef GRADE_CONVERTER_H
#define GRADE_CONVERTER_H

#include <string>

class GradeConverter
{
public:

    double letterToGradePoint(const std::string& letterGrade) const;

    std::string percentageToLetterGrade(double percentage) const;

    double percentageToGradePoint(double percentage) const;

    bool isValidGradePoint(double gradePoint) const;
};

#endif
