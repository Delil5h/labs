#pragma once
#include <iostream>
#include "Contact.h"
using namespace std;

class PhoneBook:: public Contact{
public:
PhoneBook();
~PhoneBook();
void Run();
void SetDynamicArray(int dynamicArray);
void GetDynamicArray(int dynamicArray);
private:
int Addcontact(){
    int dynamicArray = new int;
delete dynamicArray;
}
int SaveContactsToFile();


int ShowAllContants();

};
