#include<iostream>


#include"person.h"

meerkat::meerkat(){
    myName ="";
    Salary = 0;
}
void meerkat::setName(string name){
    myName = name;
    }
string meerkat::getName(){
    return myName;
}
void meerkat::setAge(int salary){
    Salary = salary;
    }
int meerkat::getAge(){
    return Salary;
}
