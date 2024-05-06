#include <fstream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile;
    myfile.open("data.txt");
    myfile << "This is the advanced Computer Programming Module";
    myfile.close();
    return 0;
}