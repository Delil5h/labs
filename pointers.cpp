#include <iostream>
using namespace std;
void swapNumbers(int& varA, int& varB){
  int swap = varA;
     varA = varB;
     varB= swap;



}


int main(){
//declaring variables 
     int varA = 25;
     int varB = 100;
    
//printing out the values of varA and varB 
  cout << "varA before swap: " <<  varA << endl; //varA is 25
  cout << "varB before swap: " << varB << endl; //varB is 100

 //calling function swapNumbers
swapNumbers(varA, varB);
  cout << "varA after swap: " <<  varA << endl;
  cout << "varB after swap: " << varB << endl;
   return 0;

}

