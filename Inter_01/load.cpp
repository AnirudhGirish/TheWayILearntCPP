//! Friend function : can access private and protected members of a class also call free class or function
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class User{
    private:
        string Name;
        int Id;
    
    public:
        // User(string name, int id){
        //     Name = name;
        //     Id = id;
        // } normal method to make a constructor i will write on more method
        User(string name, int id) : Name(name), Id(id){}; // method 2

        void display() const {
            cout << "Name of user: "<< Name << endl;
        }

        friend bool compareId(const User &usr1, const User &usr2);

};

bool compareId(const User &usr1, const User &usr2){
    return usr1.Id > usr2.Id ;
}

int main(){
    User adminUsr("Hello", 232);
    User quantUsr("Hi", 234);

    adminUsr.display();
    quantUsr.display();

    if(compareId(adminUsr, quantUsr)){
        cout << "Admin user has high precedence" << endl;
    }else{
        cout << "Quant user has high precedence" << endl;
    }

    return 0;
}