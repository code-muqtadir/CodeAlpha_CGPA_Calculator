#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course
{
    private:
         std::string courseName;
         double creditHours;
         std::string grade;
         double gradePoint;

    public:
         Course();
         
         Course(std::string courseName, double creditHours, std::string grade, double gradePoint);
         
         std::string getCourseName() const;
      
         double getCreditHours() const;
         
         std::string getGrade() const;
         
         double  getGradePoint() const;
         
         void displayCourse() const;

};

#endif