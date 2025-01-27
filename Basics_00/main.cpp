//!Variables and constants
//!Datatypes

#include<iostream>

using namespace std;

int main(){
    int var1 = 100;
    var1 = 200; // so value of var1 becomes 200.
    
    const int var2 = 100;
    // var2 = 200; this is not valid as var2 is constant.

    //! Data Types are majorly divided into 3 parts :-
    //! 1) Primitive 2) Derived 3) User-Defined

    //* 1) Primitive : 
    // int(integer [-32768 to 32767]); 
    // long int(long integers [-2147483648 to 2147483647]); 
    // float(floating point integers i.e decimals upto 7 decimal digits precisoin);
    // double(floating point integers i.e decimals upto 15 decimal digits precisoin);
    // char(a single character);
    // void(empty or null) here majorly used for function definations;
    // bool(boolean i.e true or false);
    int exforint = 100;
    long int exforlong = 1024000;
    float exforfloat = 3.223;
    double exfordouble = 3.73904308487878;
    char exforchar = 'A';
    void exforvoid();
    bool exforbool = true;

    //* 2) Derived :
    // Array(collection of items stored at continuous memory locations);
    // Function(a repetitive code is segmented abd used whenever needed);
    // Pointer(symbolic representation of addresses i.e variables that can store the address of another variable as its value);
    // Reference(it is an alternative name for an existing variable);
    int exofarray[5] = {1,2,3,4,5};
    int exoffunction();

    int* ptr;
    ptr = &exforint; //(datatype of ptr and the variable must be same)

    int& ref = exforint;
    ref = 20; //(If the value of ref is changed the value exforint, is also modified and vice versa)

    //* 3) User Defined :
    // Class(it is a user-defined data type,which can be accessed and used by creating an instance of that class);
    // Structure(a data type that can be used to group items of different types into a single type);
    // Union(group data of different type into a single type, all members share the same memory location);
    // Enum(Enumeration is used to assign names to integral constants);
    // Typedef and using()
    class hero{};
    struct a{};
    union b{};
    enum Week { Mon, Tue, Wed, Thur, Fri, Sat, Sun };
    typedef float f;//(Using typedef to define a new name for existing type)
    using integer = int;//(Using 'using' to define a new name for existing type)
};