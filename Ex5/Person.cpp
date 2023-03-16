#include "Person.h"
using namespace std;

        Person::Person()
        {
            strcpy(m_name, "");
            m_age = 0;
            m_height = 0.0;
            m_weight = 0.0;
        }
        Person::Person(const Person& person)
        {
            strcpy(m_name, person.getName());
            m_age = person.getAge();
            m_height = person.getHeight();
            m_weight = person.getWeight();
        }
        Person::Person(const string name, const int age, const float height, const float weight)
        {
            strcpy(m_name, name);
            m_age = age;
            m_height = height;
            m_weight = weight;
        }
        Person::~Person() { }
        void Person::setName(const string name)
        {
            strcpy(m_name, name);
        }
        string Person::getName() const
        {
            return m_name;
        }
        void Person::setAge(const int age)
        {
            if (age < 18)
                cout << "The person is too young." << endl;
            if (age >= 120)
                cout << "The person is too old." << endl;
            m_age = age;
        }
        int Person::getAge() const
        {
            return m_age;
        }
        void Person::setHeight(const float height)
        {
            if (height > 250.0)
                cout << "The person is too tall." <<endl;
            if (height < 0)
                return;
            m_height = height;
        }
        float Person::getHeight() const
        {
            return m_height;
        }
        void Person::setWeight(const float weight)
        {
            if (weight < 0)
                return;
            m_weight = weight;
        }
        float Person::getWeight() const
        {
            return m_weight;
        }