#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Faculty.h"
#include "Course.h"
#define MaxSize 10

using namespace std;

class Student : virtual public Person, virtual public Faculty
{
    public:
        Student();
        Student(const Student& student);
        Student(const string email, const Course& courses, const int credits);
        ~Student();
        int IsStuding(const string name);
        float AVG();
        void DoHomeWork(const Course& course);
        void setEmail(const string email);
        string getEmail() const;
        void setCourses(const Course& courses);
        Course& getCourses() const;
        void setCredits(const int credits);
        int getCredits() const;
        
    protected:
        string m_email;
        Course* m_courses;
        int m_credits;
};