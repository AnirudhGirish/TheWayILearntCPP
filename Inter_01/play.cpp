//! constructor destructor
#include<iostream>
#include<vector>

using namespace std;

class User{
public:
    string Name;
    int Id;
    vector<string> photos;

    void display_user_details(){
        cout<<"User name "<< Name << endl;
        cout <<"ID "<< Id << endl;
        cout <<"Photos ";
        for(string photo : photos){
            cout << photo << " " << endl;
        }
        cout << "User details displayed" << endl;
    }

    //* default constructor
    User(){
        //we can like even set some default things so every copy made or object made using constructor call will have default values until user defines by themselves;
        Name = "Admin";
        Id = 232;
        photos = {"url1"};
        cout << "Constructor called" <<endl;
    } // construnctor is special method or function which is called when ever a object is made using the class. It is as same as the name of the class.

    //* Parameterized constructor
    User(string name, int id, vector<string> Urls){
        Name = name;
        Id = id;
        photos = Urls;
        cout << "Parameter Constructor called" <<endl;
    }

    //* Destructor(~)
    ~User(){
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

    //* copy the object
    User user1("Anirudh", 123, {"Url100"});
    User copiedUser = user1;
    return 0;
}