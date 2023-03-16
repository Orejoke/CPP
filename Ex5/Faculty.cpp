#include "Faculty.h"

using namespace std;

        Faculty::Faculty()
        {
            strcpy(m_name, "");
            strcpy(m_headOfFaculty, "");
            m_floor = -1;
            m_credits = 0;
            m_scholarshipGrade = -1;
        }
        Faculty::Faculty(const Faculty& faculty)
        {
            strcpy(m_name, faculty.getName());
            strcpy(m_headOfFaculty, faculty.getHeadOfFaculty());
            m_floor = faculty.getFloor();
            m_credits = faculty.getCredits;
            m_scholarshipGrade = faculty.getScholarshipGrade();
        }
        Faculty::Faculty(const string name, const string headOfFaculty, const int floor, const int credits, const float scholarshipGrade)
        {
            strcpy(m_name, name);
            strcpy(m_headOfFaculty, headOfFaculty);
            m_floor = floor;
            m_credits = credits;
            m_scholarshipGrade = scholarshipGrade;
        }
        Faculty::~Faculty() {}
        void Faculty::CheckScholarshipConditions(const Student& student)
        {
            if (student.Student::AVG() < m_scholarshipGrade)
                cout << "The student doesn't meet the conditions for receiving a scholarship." << endl;
            else
                cout << "The student meets the conditions for receiving a scholarship." << endl;
        }
        void Faculty::setHeadOfFaculty(const string headOfFaculty)
        {
            strcpy(m_headOfFaculty, headOfFaculty);
        }
        string Faculty::getHeadOfFaculty() const
        {
            return m_headOfFaculty;
        }
        void Faculty::setName(const string name)
        {
            strcpy(m_name, name);
        }
        string Faculty::getName() const
        {
            return m_name;
        }
        void Faculty::setFloor(const int floor)
        {
            if (floor < -1)
                return;
            m_floor = floor;
        }
        int Faculty::getFloor() const
        {
            return m_floor;
        }
        void Faculty::setCredits(const int credits)
        {
            if (credits < 0)
                return;
            m_credits = credits;
        }
        int Faculty::getCredits() const
        {
            return m_credits;
        }
        void Faculty::setScholarshipGrade(const float scholarshipGrade)
        {
            if (scholarshipGrade < -1)
                return;
            m_scholarshipGrade = scholarshipGrade;
        }
        float Faculty::getScholarshipGrade() const
        {
            return m_scholarshipGrade;
        }