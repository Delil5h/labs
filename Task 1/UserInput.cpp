#include <iostream>

using namespace std;

int main() {
    int number;
    cout << " Enter a integer value between 5 and 10 :" << endl;
    cin >> number;
    while(number < 5 || number > 10){
        cout << "Sorry, you entered an invalid number, please try again" << endl;
        cout << " You have entered " << number << " Please enter a number between 5 and 10" << endl;
        cin >> number;
    }
    cout << "Your input value: " << number << " has been accepted";
    
    return 0;
}