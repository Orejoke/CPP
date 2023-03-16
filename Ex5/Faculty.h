#pragma once
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class Faculty
{
    public:
        Faculty();
        Faculty(const Faculty& faculty);
        Faculty(const string name, const string headOfFaculty, const int floor, const int credits, const float scholarshipGrade);
        ~Faculty();
        void CheckScholarshipConditions(const Student& student);
        void setHeadOfFaculty(const string headOfFaculty);
        string getHeadOfFaculty() const;
        void setName(const string name);
        string getName() const;
        void setFloor(const int floor);
        int getFloor() const;
        void setCredits(const int credits);
        int getCredits() const;
        void setScholarshipGrade(const float scholarshipGrade);
        float getScholarshipGrade() const;
        
    protected:
        string m_name;
        string m_headOfFaculty;
        int m_floor;
        int m_credits;
        float m_scholarshipGrade;
};