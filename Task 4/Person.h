#pragma once
#include <string>
using namespace std;

class Person{
    public:
    Person();
    Person(string firstName,float newWeight);

    ~Person();
    //overload the add operator
    float operator +(const Person& otherPerson);

    bool operator ==(const Person& otherPerson);
    bool operator !=(const Person& otherPrson);
    bool operator <(const Person& otherPerson);
    bool operator >(const Person& otherPerson);

operator int();

operator string();

operator float();

    void setAge(int newAge);

    void setFirstName(string newFirstName);

void setWeight(float newWeight);


    private:
    float mWeight;
    string mFirstName;
    int age;

};