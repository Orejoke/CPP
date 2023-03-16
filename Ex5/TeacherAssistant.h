#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Faculty.h"
#include "Course.h"
#include "TeacherAssistant.h"

using namespace std;

class TeacherAssistant : virtual public Person, virtual public Faculty
{
    public:
        TeacherAssistant();
        TeacherAssistant(const TeacherAssistant& teacherAssistant);
        TeacherAssistant(const string email, const int salary, const Course& course);
        ~TeacherAssistant();
        void WriteHomework(Student& student);
        void setEmail(const string email);
        string getEmail() const;
        void setSalary(const int salary);
        int getSalary() const;
        void setCourse(const Course& course);
        Course getCourse() const;
        
    protected:
        string m_email;
        int m_salary;
        Course m_course;
};