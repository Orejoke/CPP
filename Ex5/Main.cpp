#include <iostream>
#include "Faculty.h"
#include "Person.h"
#include "Course.h"
#include "Student.h"
#include "TeacherAssistant.h"
#include "Teacher.h"

using namespace std;

int main()
{
    Student* ptr_students = new Student[10];
    Teacher* ptr_teachers = new Teacher[3];
    TeacherAssistant* ptr_TA = new TeacherAssistant[3];
    ptr_students[1] = {"student1@gmail.com", nullptr, 10};
    ptr_students[2] = {"student2@gmail.com", nullptr, 20};
    ptr_students[3] = {"student3@gmail.com", nullptr, 30};
    ptr_students[4] = {"student4@gmail.com", nullptr, 40};
    ptr_students[5] = {"student5@gmail.com", nullptr, 50};
    ptr_students[6] = {"student6@gmail.com", nullptr, 60};
    ptr_students[7] = {"student7@gmail.com", nullptr, 70};
    ptr_students[8] = {"student8@gmail.com", nullptr, 80};
    ptr_students[9] = {"student9@gmail.com", nullptr, 90};
    ptr_students[10] = {"student10@gmail.com", nullptr, 100};
    
    ptr_teachers[1].Person::setName("Shirly");
    ptr_teachers[1].Person::setAge(46);
    ptr_teachers[1].Person::setHeight(170.0);
    ptr_teachers[1].Person::setWeight(70.0);
    ptr_teachers[1].Faculty::setName("Software Engineering");
    ptr_teachers[1].Faculty::setHeadOfFaculty("Yonit");
    ptr_teachers[1].Faculty::setFloor(2);
    ptr_teachers[1].Faculty::setCredits(160);
    ptr_teachers[1].Faculty::setScholarshipGrade(85.0);

    ptr_teachers[2].Person::setName("Avivit");
    ptr_teachers[2].Person::setAge(38);
    ptr_teachers[2].Person::setHeight(180.0);
    ptr_teachers[2].Person::setWeight(80.0);
    ptr_teachers[2].Faculty::setName("Software Engineering");
    ptr_teachers[2].Faculty::setHeadOfFaculty("Yonit");
    ptr_teachers[2].Faculty::setFloor(2);
    ptr_teachers[2].Faculty::setCredits(160);
    ptr_teachers[2].Faculty::setScholarshipGrade(85.0);
    
    ptr_teachers[3].Person::setName("Roni");
    ptr_teachers[3].Person::setAge(30);
    ptr_teachers[3].Person::setHeight(190.0);
    ptr_teachers[3].Person::setWeight(90.0);
    ptr_teachers[3].Faculty::setName("Software Engineering");
    ptr_teachers[3].Faculty::setHeadOfFaculty("Yonit");
    ptr_teachers[3].Faculty::setFloor(2);
    ptr_teachers[3].Faculty::setCredits(160);
    ptr_teachers[3].Faculty::setScholarshipGrade(85.0);
    
    Course course1;
    course1.setName("Physics 1");
    course1.setGrade(0);
    course1.setCredits(4);
    course1.setHomework(0);
    ptr_TA[1].setEmail("TA1@gmail.com");
    ptr_TA[1].setSalary(9000);
    ptr_TA[1].setCredits(course1);
    ptr_TA[1].Person::setName("Itamar");
    ptr_TA[1].Person::setAge(44);
    ptr_TA[1].Person::setHeight(170.0);
    ptr_TA[1].Person::setWeight(80.0);
    ptr_TA[1].Faculty::setName("Software Engineering");
    ptr_TA[1].Faculty::setHeadOfFaculty("Yonit");
    ptr_TA[1].Faculty::setFloor(2);
    ptr_TA[1].Faculty::setCredits(160);
    ptr_TA[1].Faculty::setScholarshipGrade(85.0);

    Course course2;
    course2.setName("Data Structure");
    course2.setGrade(60);
    course2.setCredits(5);
    course2.setHomework(0);
    ptr_TA[2].setEmail("TA2@gmail.com");
    ptr_TA[2].setSalary(9000);
    ptr_TA[2].setCredits(course2);
    ptr_TA[2].Person::setName("Itamar");
    ptr_TA[2].Person::setAge(44);
    ptr_TA[2].Person::setHeight(180.0);
    ptr_TA[2].Person::setWeight(80.0);
    ptr_TA[2].Faculty::setName("Software Engineering");
    ptr_TA[2].Faculty::setHeadOfFaculty("Yonit");
    ptr_TA[2].Faculty::setFloor(2);
    ptr_TA[2].Faculty::setCredits(160);
    ptr_TA[2].Faculty::setScholarshipGrade(85.0);

    Course course3;
    course3.setName("Logic");
    course3.setGrade(60);
    course3.setCredits(5);
    course3.setHomework(0);
    ptr_TA[3].setEmail("TA2@gmail.com");
    ptr_TA[3].setSalary(9000);
    ptr_TA[3].setCredits(course3);
    ptr_TA[3].Person::setName("Itamar");
    ptr_TA[3].Person::setAge(44);
    ptr_TA[3].Person::setHeight(180.0);
    ptr_TA[3].Person::setWeight(80.0);
    ptr_TA[3].Faculty::setName("Software Engineering");
    ptr_TA[3].Faculty::setHeadOfFaculty("Yonit");
    ptr_TA[3].Faculty::setFloor(2);
    ptr_TA[3].Faculty::setCredits(160);
    ptr_TA[3].Faculty::setScholarshipGrade(85.0);
}