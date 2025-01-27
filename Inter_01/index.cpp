//! copy constructor
#include<iostream>
#include<vector>

using namespace std;

class User{
public:
    string* Name;
    int Id;
    vector<string> photos;

    void display_user_details(){
        cout<<"User name "<< *Name << endl;
        cout <<"ID "<< Id << endl;
        cout <<"Photos ";
        for(string photo : photos){
            cout << photo << " " << endl;
        }
        cout << "User details displayed" << endl;
    }

    //* Parameterized constructor
    User(string name, int id, vector<string> Urls){
        Name = new string(name);
        Id = id;
        photos = Urls;
        cout << "Parameter Constructor called" <<endl;
    }

    //* Copy Constructor 
    // technically we are taking up the refrence of the entire object i.e making the deep copy and also name it something i am naming it here copy;
    User(const User& copy){// const is used so as the original data is not modified
        Name = new string(*copy.Name);
        Id = copy.Id;
        photos = copy.photos;
        cout << "Copy constructor called" << endl;
    }

    //* Destructor(~)
    ~User(){
        delete Name;
        cout << "Destructor called" <<endl;
    }
};

int main(){
    //* for default constructor
    // User user1; // object created
    // user1.Name = "Anirudh";
    // user1.Id = 243;
    // user1.display_user_details();

    //* for parameterized constructor
    // User user1("Anirudh", 123, {"Url100"});
    // user1.display_user_details();

    //* Copy Constructor
    User user1("Anirudh", 123, {"Url100"});
    User copiedUser = user1;
    cout<< " \n " <<endl;
    user1.display_user_details();
    cout<< " \n " <<endl;
    copiedUser.display_user_details();
    cout<< " \n " <<endl;

    cout << "--------------------------" << endl;
    *user1.Name = "Abhinav";

    cout<< " \n " <<endl;
    user1.display_user_details();
    cout<< " \n " <<endl;
    copiedUser.display_user_details();
    cout<< " \n " <<endl;
    return 0;
}