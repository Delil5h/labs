#include "Person.h"

Person::Person()
{
}

Person::Person(string firstName, float newWeight)
{
}


Person::~Person()
{
}

float Person::operator+(const Person &otherPerson)
{
    return 0.0f;
}

bool Person::operator==(const Person &otherPerson)
{
    return(mWeight == otherPerson.mWeight)&& (mFirstName == otherPerson.mFirstName) && (age == otherPerson.age); 
}

bool Person::operator!=(const Person &otherPerson)
{
    return !(operator ==(otherPerson));
}

bool Person::operator<(const Person &otherPerson)
{
    return  age < otherPerson.age;
}

bool Person::operator>(const Person &otherPerson)
{
    return age > otherPerson.age;
}

Person::operator int()
{
    return age;
}

Person::operator string()
{
    return mFirstName;
}

Person::operator float()
{
    return mWeight;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

void Person::setFirstName(string newFirstName)
{
}

void Person::setWeight(float newWeight)
{
}
