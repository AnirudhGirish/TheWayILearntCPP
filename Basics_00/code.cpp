//! Loops

#include<iostream>

using namespace std;

int main(){
    //* while loop
    // int no_of_cups_availabe = 0;
    // int tea_served = 0;
    // cout<< "Enter the total no of cups availabe : ";
    // cin >> no_of_cups_availabe;
    // while (no_of_cups_availabe > 0)
    // {
    //     tea_served++;
    //     cout << "Tea served :" << tea_served <<endl;
    //     no_of_cups_availabe--;
    // }
    // cout << "All tea cups served" << endl;

    //* do-while loop
    // string response;
    // int tea = 0;
    // do{
    //     cout << "Serving a tea"<< endl;
    //     cout << "Do you want more tea (Y/N)? ";
    //!     getline(cin, response); if you wan to take string input like sentence
    //     cin >> response; //if you want to take one word input
    //     tea++;
    // }while (!((response == "no")|| (response == "No")));
    // {
    //     cout << "\n Total tea served : " << tea << "\n" << endl;
    // }

    //* for loop
    // int teaCups = 5;
    // for(int i=1; i<=teaCups; i++){
    //     cout << "Brewing cup " << i << " of tea" << endl;
    // } 

    //* break keyword
    // string response;
    // while(true){
    //     cout << "Do you want more tea type stop to exit : ";
    //     cin >> response;
    //     if(response == "stop"){
    //         cout << "Breaaking.....";
    //         break;
    //     }
    //     cout << "Here is another cup of tea\n";
    // } 

    //* continue keyword
    // string teaTypes[] = {"Green", "Black", "Lemon"};
    // int n = sizeof(teaTypes) / sizeof(teaTypes[0]);
    // for(int i=0; i < n; i++){
    //     if(teaTypes[i] == "Green"){
    //         cout << "Skipping " << teaTypes[i] << " tea from brewing" << endl;
    //         continue;
    //     }
    //     cout << "Brewing " << teaTypes[i] << "..." << endl;
    // }

    //* nested loop
    string teaTypes[3] = {"Green", "Black", "Lemon"};
    for(int i=0; i< 3; i++){
        cout << "\n" << endl;
        for(int j=1; j<=3;j++){
            cout << "Brewing \""<< teaTypes[i]<< "\" for " << j << " time\n";
        }
    }
    cout << "\n" << endl;
    return 0;
}