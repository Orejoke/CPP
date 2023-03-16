#include "Student.h"
#define MaxSize 10

using namespace std;

        Student::Student()
        {
            strcpy(m_email, "");
            Course [] m_courses = new Course[MaxSize];
            Course* temp;
            temp = m_courses;
            while (temp)
            {
                temp = nullptr;
                temp++;
            }
            m_credits = -1;
        }
        Student::Student(const Student& student)
        {
            strcpy(m_email, student.getEmail());
            Course [] m_courses = new Course[MaxSize];
            Course* temp1, temp2;
            temp1 = m_courses;
            temp2 = student.getCourses();
            while ((temp1)&&(temp2))
            {
                temp1 = temp2;
                temp1++;
                temp2++;
            }
            m_credits = student.getCredits();
        }
        Student::Student(const string email, const Course& courses, const int credits)
        {
            strcpy(m_email, email);
            Course [] m_courses = new Course[MaxSize];
            Course* temp1, temp2;
            temp1 = m_courses;
            temp2 = courses;
            while ((temp1)&&(temp2))
            {
                temp1 = temp2;
                temp1++;
                temp2++;
            }
            m_credits = credits;
        }
        Student::~Student()
        {
            delete[] m_courses;
        }
        int Student::IsStuding(const string name)
        {
            Course* temp;
            temp = m_courses;
            while (temp)
            {
                if (temp->getName() == name)
                    return 1;
                temp++;
            }
            return 0;
        }
        float Student::AVG()
        {
            Course* temp;
            temp = m_courses;
            int sum = 0;
            int count = 0;
            while (temp)
            {
                sum += temp->getGrade();
                count++;
                temp++;
            }
            return sum/count;
        }
        void Student::DoHomeWork(const Course& course)
        {
            Course* temp;
            temp = m_courses;
            while (temp->getName() != )
                temp++;
            temp->setHomework(0);
        }
        void Student::setEmail(const string email)
        {
            strcpy(m_email, email);
        }
        string Student::getEmail() const
        {
            return m_email;
        }
        void Student::setCourses(const Course& courses)
        {
            Course [] m_courses = new Course[MaxSize];
            Course* temp1, temp2;
            temp1 = m_courses;
            temp2 = courses;
            while ((temp1)&&(temp2))
            {
                temp1 = temp2;
                temp1++;
                temp2++;
            }
        }
        Course& Student::getCourses() const
        {
            return m_courses;
        }
        void Student::setCredits(const int credits)
        {
            m_credits = credits;
        }
        int Student::getCredits() const
        {
            return m_credits;
        }