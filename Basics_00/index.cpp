#include<iostream>

using namespace std;

int main(){
    //problem 1 : 
    int numberOfCups = 0;
    int pricePerCup = 0;
    cout << "Enter the number of cups and price per cup: \t";
    cin >> numberOfCups >> pricePerCup;
    int totalPrice = 0;
    totalPrice = numberOfCups*pricePerCup;
    if(totalPrice > 50){
        totalPrice = (totalPrice-(totalPrice*0.05));
        cout << "The total amount after discount is "<< totalPrice << endl;
    }else{
        cout << "The total amount is "<< totalPrice << endl;
    }

    //problem 2 :
    int userTeaBags = 0;
    cout << "Enter the number of tea bags present with user: " << endl;
    cin >> userTeaBags;
    if (userTeaBags<10)
    {
        userTeaBags += 5;
    }
    cout << "User tea bags number is : "<< userTeaBags << endl;

    // problem 3 :
    int cups_bought = 0;
    cout << "Enter the number of cups bought by user : ";
    cin >> cups_bought;
    if(cups_bought > 20){
        cout << "The customer is very loyal and is a \"GOLD\" member" << endl;
    }
    else if(cups_bought >= 10 && cups_bought <= 20){
        cout << "The customer is of high potential is a \"SILVER\" member" << endl;
    }
    else{
        cout << "The customer  is a \"BRONZE\" member" << endl;
    }

    // problem 4 :
    bool isStudent;
    int cups = 0; 
    cout << "Enter 1 if you  are a student else 0 and also do put the number of cups you have\t" ;
    cin >> isStudent >> cups;
    if(isStudent or (cups>=15)){
        cout << "You are elegibe for tea subscription discount" << endl;
    }else {
        cout << "You are neither a student nor have 15 cups so not elegible" << endl;
    }

    return 0;
};