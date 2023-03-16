#include "Course.h"

using namespace std;

        Course::Course()
        {
            strcpy(m_name, "");
            m_grade = 0.0;
            m_credits = 0;
            m_homework = 0;
        }
        Course::Course(const Course& course)
        {
            strcpy(m_name, getName());
            m_grade = course.getGrade();
            m_credits = course.getCredits();
            m_homework = course.getHomework();
        }
        Course::Course(const string name, const float grade, const int credits, const int homework)
        {
            strcpy(m_name, name);
            m_grade = grade;
            m_credits = credits;
            m_homework = homework;
        }
        Course::~Course() {}
        void Course::setName(const string name)
        {
            strcpy(m_name, name);
        }
        string Course::getName() const
        {
            return m_name;
        }
        void Course::setGrade(const float grade)
        {
            if ((grade < 0)||(grade > 100))
                return;
            m_grade = grade;
        }
        float Course::getGrade() const
        {
            return m_grade;
        }
        void Course::setCredits(const int credits)
        {
            if ((credits < 0)||(credits > 5))
                return;
            m_credits = credits;
        }
        int Course::getCredits() const
        {
            return m_credits;
        }
        void Course::setHomework(const int homework)
        {
            if ((homework != 0)&&(homework != 1))
                return;
            m_homework = homework;
        }
        int Course::getHomework() const
        {
            return m_homework;
        }
        Course& Course::operator= (const Course& course)
        {
            strcpy(m_name, getName());
            m_grade = course.getGrade();
            m_credits = course.getCredits();
            m_homework = course.getHomework();
        }