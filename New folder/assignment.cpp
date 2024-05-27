#include <iostream>
using namespace std;
int main() {
    //null pointer
    int *pExamplePointer = nullptr;
    int exampleVariable = 20;

    /*use the address operator to assign an address to the pointer*/
    pExamplePointer = &exampleVariable;
    cout<< "The value of the pointer is :"<< pExamplePointer<<endl;
    cout << "The address of the variable is :"<< &exampleVariable<< endl;
    
    return 0;
    }