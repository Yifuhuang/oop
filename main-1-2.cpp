#include<iostream>


#include"person.h"
using namespace std;
int main(){

string name;
int money;
person m1("person1",100),m2("person2",200),m3("person3",300),m4("person4",400); 
m1.setName("Joe"); 
m1.setSalary(19); 
name=m1.getName(); 
money=m1.getSalary(); 
cout<<"name is:"<<name<<endl;
cout<<"salary is:"<<money<<endl;
m2.setName("Huang");
m2.setSalary(2);
name=m2.getName();
money=m2.getSalary();
cout<<"name is:"<<name<<endl;
cout<<"salary is:"<<money<<endl;
m3.setName("Sam");
m3.setSalary(109);
name=m3.getName();
money=m3.getSalary();
cout<<"name is:"<<name<<endl;
cout<<"salary is:"<<money<<endl;
m4.setName("Scott");
m4.setSalary(29);
name=m4.getName();
money=m4.getSalary();
cout<<"name is:"<<name<<endl;
cout<<"salary is:"<<money<<endl;



} 