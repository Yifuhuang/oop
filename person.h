#include<iostream>
using namespace std;



class person{

    public:
       
       string name;
       int salary;


person(string myName,int Salary); // a name and salary must be provided to create a person
void setName(string myName);      // change the person's name
string getName();
void setSalary(int mySalary);     // change the person's salary
int getSalary();
};


