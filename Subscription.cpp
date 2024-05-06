#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    //seed the random number generator with the current time
    srand(time(0));

    //generating numbers between 0 and 11
    int daysUntilExpiration = rand() % 12;
    
    switch(daysUntilExpiration) {
        case 0:
        cout<< "Your subscription has expired."<< endl;
        break;
        case 1:
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
        break;
        case 2:
        cout<<"Your subscription expires in 2 days"<<endl;
        cout<<"Renew and save 10%!"<< endl;
        break;
        case 3:
        cout<< "Your subscription expires in 3 days"<<endl;
        cout<<"Renew and save 10%!"<< endl;
        break;
        case 4:
        cout<<"Your subscription expires in 4 days "<<endl;
        cout <<"Renew and save 10%!"<< endl;
        break;
        case 5:
        cout<<"Your subscription expires in 5 days"<<endl;
        cout<<"Renew and save 10%!"<<endl;
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        cout<<"Your subscription will expire soon.Renew now!"<<endl;
        break;
        default:
        cout<<"You have an active subscription."<<endl;
    }
    return 0;
}