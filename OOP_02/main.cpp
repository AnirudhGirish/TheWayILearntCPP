//! OOP = Object Oriented Programming
/*
    Everything is object
    main() function can exist without a class
*/ 

#include<iostream>
#include<vector>

using namespace std;

class User { //class
    public:
        //data members (attribute)
        string name;
        int id;
        vector<string> photos;

        //member function
        void display_user_details(){
            cout<<"User name "<< name << endl;
            cout <<"ID "<< id << endl;
            cout <<"Photos ";
            for(string photo : photos){
                cout << photo << " " << endl;
            }
            cout << "User details displayed" << endl;
        }
};

int main(){
    User usr1; // object
    usr1.name = "Ani";
    usr1.id = 1;
    usr1.photos = {"url1", "url2", "url3"};

    usr1.display_user_details();
    return 0;
} 