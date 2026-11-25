#pragma once

#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(string name, float weight);// age = 0 default assigned the 

    ~Person();
    //Overload the add operator
    float operator + (const Person& otherPerson);

    //Overload the subtract operator
    float operator - (const Person& otherPerson);

    bool operator == (const Person& otherPerson);
    bool operator != (const Person& otherPerson);
    bool operator < (const Person& otherPerson);
    bool operator > (const Person& otherPerson);
    operator int();
    operator string();
    operator float();


private:
    float mWeight;
    string mFirstName;
    int mAge;
};