#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // seed the random number generator with the current time 
    srand(time(0));
    //generating numbers between 0 and 11

    int daysUntilExpiration = rand() % 12;
//checking if the user's subscription expires in 10 days or less

if(daysUntilExpiration <= 10){
    cout<< "Your subscription will expire soon.Renew now !"<< endl;
    if(daysUntilExpiration <= 5){
        cout<<"Your subscription expires in :"<< daysUntilExpiration<< "days"<< endl;
        cout<<"Renew now and save 10%"<< endl;
        if(daysUntilExpiration == 1){
            cout<<"Your subscription expires within a day!"<< endl;
            cout<<"Renew now and save 20%"<< endl;
        if(daysUntilExpiration == 0){
            cout<<"Your subscription has expired"<<endl;
        }
         }
    }
}
    else{
        cout<<"You have an active subscription."<<endl;
    }
    return 0;
}
        





