#include "TeacherAssistant.h"

using namespace std;

        TeacherAssistant::TeacherAssistant()
        {
            strcpy(m_email, "");
            m_salary = 0;
        }
        TeacherAssistant::TeacherAssistant(const TeacherAssistant& teacherAssistant)
        {
            strcpy(m_email, teacherAssistant.getEmail());
            m_salary = teacherAssistant.getSalary();
            m_course = teacherAssistant.getCourse();
        }
        TeacherAssistant::TeacherAssistant(const string email, const int salary, const Course& course)
        {
            strcpy(m_email, email);
            m_salary = salary;
            m_course = course;
        }
        TeacherAssistant::~TeacherAssistant()
        {
            delete m_course;
        }
        void TeacherAssistant::WriteHomework(Student& student)
        {
            Course* temp;
            temp = student.getCourses();
            while (temp->getName() != m_course.getName())
                temp++;
            temp->setHomework(1);
        }
        void TeacherAssistant::setEmail(const string email)
        {
            strcpy(m_email, email);
        }
        string TeacherAssistant::getEmail() const
        {
            return m_email;
        }
        void TeacherAssistant::setSalary(const int salary)
        {
            if (salary < 0)
                return;
            m_salary = salary;
        }
        int TeacherAssistant::getSalary() const
        {
            return m_salary;
        }
        void TeacherAssistant::setCourse(const Course& course)
        {
            m_course = course;
        }
        Course TeacherAssistant::getCourse() const
        {
            return m_course;
        }