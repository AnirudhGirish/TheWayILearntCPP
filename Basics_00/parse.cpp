//! Functions

#include<iostream>

using namespace std;

void userFinder(int numberOfUsers){
    numberOfUsers = numberOfUsers+5;
    cout<<"No of users to be found are : "<< numberOfUsers << endl;
}

void userReturn(int &userToBeReturned){ //just to add & to variable of parameter
    userToBeReturned = userToBeReturned+5;
    cout<<"No of users to be returned are : "<< userToBeReturned << endl;
}

//* lamda functions

int main(){
    // int users = 10;
    // cout << "Number of users " << users;
    // userFinder(users); // pass by value
    // cout << "Number of users 2 " << users;
    // userReturn(users); // pass by refrence
    // cout << "Number of users 3 " << users; 

    //* lamda function :- it dosent have a name
    auto preparedChai = [](int cups){
        cout << "Preparing tea for "<< cups<< " cups of tea" << endl;
    };
    preparedChai(4);
    return 0;
}