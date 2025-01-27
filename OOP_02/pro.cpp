//! Encapsulation : give or allow user to access data that is required only through functions
//! Abstraction, derived class and "virtual functions(Polymorphism)"
//! Inheritence

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class BankAccount{
    private:
        string account_number;
        double balance;

    public:
        BankAccount(string accNum, double bal){
            account_number = accNum;
            balance = bal;
        }

        // getter to get balance
        double getBalance() const{
            return balance;
        }

        // method to deposit balance
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Amount deposited: "<< amount << endl;
            }else{
                cout << "Invalid deposit ammount" << endl;
            }
        }

        //Withdraw amount
        void withdraw(double amount){
            if(!(amount>0 && amount <= balance)){
                cout << "withdrawl failed" << endl;
                return;
            }
            balance -= amount;
            cout << "Amount withdrawn: "<< amount << endl;
        }

};

class Tea{ // classes having virtual classes are called "abstraction" classes;
    public:
        virtual void prepareIngredients()=0; // pure virtual function
        virtual void brew() {};
        virtual void serve() {};

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};

// derived class
class GreenTea: public Tea{
    public:
        void prepareIngredients() override{
            cout << "Green leaves and water ready" << endl;
        }

        void brew() override{
            cout << "Green Tea brewed" << endl;
        }

        void serve() override{
            cout << "Green Tea served" << endl;
        }
};

class MasalaTea: public Tea{
    public:
        void prepareIngredients() override{
            cout << "Masala and water ready" << endl;
        }

        void brew() override{
            cout << "Masala Tea brewed" << endl;
        }

        void serve() override{
            cout << "Masala Tea served" << endl;
        }
};

// base/main/parent class
class User{
    protected:
        string Name;
        int Id;
    
    public:
        User(string name, int id): Name(name), Id(id){
            cout << "User constructor called by: " << Name << endl;
        };

        virtual void fetch() const{
            cout << "Fetching" << Name << "with generic method" << endl; 
        }

        virtual void find() const{
            cout << "Finding user with: " << Id << endl;
        }
        
        virtual ~User(){
            cout << "User destructor called for " << Name << endl;
        }
};

class AdminUser : public User {// declaring this class with base class i.e inheritence this class inherits all its proper from base class;
    public: 
        AdminUser(int id): User("Admin User", id){
            cout << "Admin constructor called" << endl;
        }

        void fetch() const override{
            cout << "Name is " << Name << endl;
        }

        ~AdminUser(){
            cout << "Admin User constructor called !!" << endl;
        }
};

class CorpUser : public User{
    public:
        CorpUser(string name, int id): User(name,id){
            cout << "Corp user constructor called" << endl;
        }

        vector<string> Photos;

        void addPics(vector<string> pics){
            Photos = pics;
            cout<< "Pics added successfully" << endl;
        }

        void fetch()const override final{// after using final this function if inherited by another class cant be changed, call or use from base class
            cout << "Name and id is: " << Name << " " << Id <<  endl;
        };

        ~CorpUser(){
            cout << "Corp User destructor called" << endl;
        }
};

int main(){
    // BankAccount acc1("KLB1321", 4500);
    // acc1.withdraw(10);
    // double amt = acc1.getBalance();
    // cout << amt << endl;

    // GreenTea green;
    // MasalaTea masala;
    // green.makeTea();
    // masala.makeTea();

    // CorpUser usr1("Pro", 25);
    // usr1.addPics({"url1","url2","url3"});

    User* user1 = new AdminUser(22);
    User* user2 = new CorpUser("Po", 33);

    user2->find();
    return 0;
}