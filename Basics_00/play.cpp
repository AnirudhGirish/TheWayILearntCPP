//! Arrarys, pointers, dynamic memory
#include<iostream>

using namespace std;

int getTotalTemprature(int temp[]){
    int total = 0;
    for(int i=0; i<5; i++){
        total += temp[i];
    }
    return total;
}

int* getUserId(int many){
    int* users = new int[many]; //dynamic memory allocation "new";
    for(int i=0; i<many; i++){
        users[i] = (i+1) * 11;
    }
    return users;
}

int main(){
    //int temprature[5] = {40,45,50,55,60};
    // cout << "Temprature for next 5 days : ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << temprature[i] << " ";
    // }
    // cout << endl;

    // int sizetemp = sizeof(temprature)/sizeof(temprature[0]);
    // int totalTemp = getTotalTemprature(temprature, sizetemp);
    // cout << totalTemp <<endl;

    //* Dynamic mem-allco and pointers
    // int many = 5;
    // int* ids = getUserId(many);
    // for(int i=0; i<many;i++){
    //     cout << "User ID: " << ids[i] << endl;
    // }

    // delete[] ids; // to delete array after execution as cpp flushes function out after execution;

    //* Multi Dimension array
    int userId[3][5] = {
        {5,5,5,5,5},
        {3,6,9,2,1},
        {1,2,3,4,5}
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout << userId[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}