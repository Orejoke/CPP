#pragma once
#include <iostream>
#include <string>
#include "TeacherAssistant.h"
#include "Student.h"

using namespace std;

class Teacher : public TeacherAssistant
{
    public:
        Teacher();
        Teacher(const Teacher& teacher);
        ~Teacher();
        void gradeStudent(const Student& student, const int grade);
        
    protected:

};