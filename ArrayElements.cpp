#include <iostream>
using namespace std;

int main(){
string myElements[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

for(const auto& element : myElements){
// checking if an element starts with the letter "B"
if(element[0] == 'B' ) {
//display the output
cout<<element << endl;
}
}
return 0;
}