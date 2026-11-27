#include <iostream>
#include "GradeConverter.h"

using namespace std;

int main()
{
    GradeConverter converter;

    cout << "A+ = " << converter.letterToGradePoint("A+") << endl;
    cout << "A = " << converter.letterToGradePoint("A") << endl;
    cout << "B+ = " << converter.letterToGradePoint("B+") << endl;
    cout << "F = " << converter.letterToGradePoint("F") << endl;
    cout << "G = " << converter.letterToGradePoint("G") << endl;

    cout << endl;
    cout << "Percentage to Letter Grade: " << endl;

    cout << "95 = " << converter.percentageToLetterGrade(95) << endl;
    cout << "87 = " << converter.percentageToLetterGrade(87) << endl;
    cout << "82 = " << converter.percentageToLetterGrade(82) << endl;
    cout << "72 = " << converter.percentageToLetterGrade(72) << endl;
    cout << "55 = " << converter.percentageToLetterGrade(55) << endl;
    cout << "40 = " << converter.percentageToLetterGrade(40) << endl;
    cout << "105 = " << converter.percentageToLetterGrade(105) << endl;

    cout << endl;
    cout << "Percentage to Grade Point: " << endl;

    cout << "95 = " << converter.percentageToGradePoint(95) << endl;
    cout << "87 = " << converter.percentageToGradePoint(87) << endl;
    cout << "72 = " << converter.percentageToGradePoint(72) << endl;
    cout << "40 = " << converter.percentageToGradePoint(40) << endl;
    cout << "105 = " << converter.percentageToGradePoint(105) << endl;


    cout << endl;
    cout << "Grade Point Validation: " << endl;

    cout << "4.00 = " << converter.isValidGradePoint(4.00) << endl;
    cout << "3.75 = " << converter.isValidGradePoint(3.75) << endl;
    cout << "3.00 = " << converter.isValidGradePoint(3.00) << endl;
    cout << "0.00 = " << converter.isValidGradePoint(0.00) << endl;
    cout << "3.60 = " << converter.isValidGradePoint(3.60) << endl;
    cout << "4.50 = " << converter.isValidGradePoint(4.50) << endl;
    cout << "-1.00 = " << converter.isValidGradePoint(-1.00) << endl;

    return 0;
}