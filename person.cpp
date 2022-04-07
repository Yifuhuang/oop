#include<iostream>
using namespace std;

#include"person.h"

person::person(string myName,int Salary){
    name=myName ="";
    salary=Salary = 0;
}
void person::setName(string myName){
    name=myName;
    }
string person::getName(){
    return name;
}
void person::setSalary(int mySalary){
    salary = mySalary;
    }
int person::getSalary(){
    return salary;
}
