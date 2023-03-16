#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        Person();
        Person(const Person& person);
        Person(const string name, const int age, const float height, const float weight);
        ~Person();
        void setName(const string name);
        string getName() const;
        void setAge(const int age);
        int getAge() const;
        void setHeight(const float height);
        float getHeight() const;
        void setWeight(const float weight);
        float getWeight() const;

    protected:
        string m_name;
        int m_age;
        float m_height;
        float m_weight;
};