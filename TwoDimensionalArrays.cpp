#include <iostream>
using namespace std;

int main() {
    int row, column;
// number of rows and columns
    cout << "Enter the number of rows (but must be less than  or equal to 3) :";
    cin >> row;
    cout << "Enter the number of colunms (but must be less than or equal to 3): ";
    cin >> column;

    // checking if the number of rows and columns are valid
    if (row > 3 || column > 3){
        cout <<" Invalid input! Dimensions must be less than or equal to 3."<< endl;
        return 1;
    }
    // Dynamic allocation of the 2D array
    double** array = new double*[row];
    for(int x = 0; x < row; x++){
        array[x] = new double [column];
    }

    // Assigning  values to elements
for(int x = 0; x < row ; x++){
    for(int y = 0; y < column; y++){
        array[x][y] = x * y * 2.5; 
    }
}
 // outputing the values of the elements in the array 
 for(int x = 0; x < row; x++ ){
    for(int y = 0; y < column; y++){
        cout << array[x][y] << " ";
    }
    cout << endl;
 }
  // deallocation of memory
  for(int x = 0; x < row; x++){
    delete[] array[x];
  }
  delete[] array;

  return 0; 
}