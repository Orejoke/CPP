#pragma once
#include <iostream>
#include <string>

using namespace std;

class Course
{
    public:
        Course();
        Course(const Course& course);
        Course(const string name, const float grade, const int credits, const int homework);
        ~Course();
        void setName(const string name);
        string getName() const;
        void setGrade(const float grade);
        float getGrade() const;
        void setCredits(const int credits);
        int getCredits() const;
        void setHomework(const int homework);
        int getHomework() const;
        Course& operator= (const Course& course);
        
    protected:
        string m_name;
        float m_grade;
        int m_credits;
        int m_homework;
};