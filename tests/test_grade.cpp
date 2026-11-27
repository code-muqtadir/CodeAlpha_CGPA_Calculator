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

    return 0;
}