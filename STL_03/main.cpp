//! Employee management system

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp){
    cout << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: " << emp.salary << endl;
}

int main(){

    vector<Employee> employees = {
        {101, "A" , 500},
        {102, "B" , 600},
        {103, "C" , 700},
        {104, "D" , 800},
        {105, "E" , 900}
    };

    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary>e2.salary;
    });

    cout << "Sorted employes : ";
    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;
    copy_if(employees.begin(),employees.end(), back_inserter(highEarners),
    [](const Employee& e){
        return e.salary > 600;
    });

    cout << "High earning employes : ";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(),employees.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary; 
    });

    double averageSalary = totalSalary / employees.size();
    cout << "Avg Salary:  " << averageSalary << endl;

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });

    return 0;
}