#include "Teacher.h"

using namespace std;

        Teacher::Teacher() { }
        Teacher::Teacher(const Teacher& teacher) { }
        Teacher::~Teacher() { }
        void Teacher::gradeStudent(const Student& student, const int grade)
        {
            Course* temp, course;
            temp = student.getCourses();
            course = this.getCourse();
            while (temp->getName() != course.getName())
                temp++;
            if (temp->getHomework() == 1)
                temp->setGrade(0.0);
            else
            {
                temp->setGrade((float)grade);
                if (grade > 60)
                    student.setCredits(student.getCredits() + temp->getCredits())
            }
        }       