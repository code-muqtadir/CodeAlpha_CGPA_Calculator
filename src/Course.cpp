#include "Course.h"
#include <iostream>
    
         Course::Course()
         {
            courseName="";
            creditHours=0.0;
            grade="";
            gradePoint=0.0;
         }

         Course::Course(std::string courseName, double creditHours, std::string grade, double gradePoint)
         {
            this->courseName=courseName;
            this->creditHours=creditHours;
            this->grade=grade;
            this->gradePoint=gradePoint;
         }

         std::string Course::getCourseName() const
         {
            return courseName;
         }

         double Course::getCreditHours() const
         {
            return creditHours;
         }

         std::string Course::getGrade() const
         {
            return grade;
         }

         double Course::getGradePoint() const
         {
            return gradePoint;
         }

         void Course::displayCourse() const
         {
            std::cout << "Course Name: " << courseName << std::endl;
            std::cout << "Credit Hours: " << creditHours << std::endl;
            std::cout << "Grade: " << grade << std::endl;
            std::cout << "Grade Point: " << gradePoint << std::endl;
            
         }


