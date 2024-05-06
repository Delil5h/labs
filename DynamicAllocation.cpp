#include <iostream>
#include <string>
using namespace std;

int main (){
    // declaring and initializing pointers to null
    int* dynamicInteger = nullptr;
    string* dynamicString = nullptr;
    
    //Dynamic allocation for an integer and string
    dynamicInteger = new int;
    dynamicString  = new string;
    
    // prompting user to enter input for the variables
    cout << "Enter the value of the dynamically allocated integer: ";
    cin >> *dynamicInteger;
     
     cout << "Enter the value of the dynamically allocated string:";
     cin.ignore();// should ignore the newline character left in the input buffer 
     getline(cin, *dynamicString);

     // display the values on the console
     cout <<" The value of the dynamically allocated integer is " << *dynamicInteger << endl;
     cout << " The value of the dynamically allocated string  is " << *dynamicString << endl;

     // deallocation of memory 
     delete dynamicInteger;
     delete dynamicString;
     return 0;



}