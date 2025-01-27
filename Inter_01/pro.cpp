//! getter and setter, deligation constructor
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class User{
    private:
        string Name;
        int Id;
        vector<string> photos;
    
    public:
        User(){
            Name = "Admin";
            Id = 21;
            photos = {"uri1", "uri2"};
        }

        User(string name, int id, vector<string> pics){
            Name = name;
            Id = id;
            photos = pics;
        }

        //* getter and setter for Name
        //getter
        string getUserName(){
            return Name;
        }
        //setter
        void setUserName(string name){
            Name = name;
        }

        //* getter and setter for Id
        //getter
        int getUserId(){
            return Id;
        }
        //setter
        void setUserId(int id){
            Id = id;
        }

        //* getter and setter for Photos ( vector)
        //getter
        vector<string> getUserPhotos(){
            return photos;
        }
        //setter
        void setUserPhotos(vector<string> pics){
            photos = pics;
        }

        void display(){
            cout << "User name: "<< Name << endl;
            cout<< "User Id: " << Id << endl;
            cout << "User photos: ";
            for(string photo : photos){
                cout<< photo << " ";
            }
            cout << endl;
        }
};

class Bank{
    public: 
        string bankName;
        int numAcc;
        vector<string> staff;

        // main constructor
        Bank(string name, int num, vector<string> pos){
            bankName = name;
            numAcc = num;
            staff = pos;
            cout << "Main constructor called" << endl;
        }

        void display(){
            cout << "Bank Name: " << bankName << endl;
            cout << "Number of accounts: "<< numAcc << endl;
            cout << "Staff positions are: ";
            for(string pos : staff){
                cout << pos << " ";
            }
            cout << endl;
        }

        //delegation constructor
        Bank(string name): Bank(name, 50, {"BM", "ACC", "Cashier", "Clr"}) {
            cout << "Deligation constructor called" << endl;
        };
};

int main(){
    // User usr;
    // usr.setUserName("Yoo");// using user setter

    Bank addBank("Do Bank");
    addBank.display();
    return 0;
}