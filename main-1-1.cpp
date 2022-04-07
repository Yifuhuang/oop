#include<iostream>


#include"meerkat.h"
using namespace std;
int main(){

string name;
int age;
meerkat m1,m2,m3,m4; 
m1.setName("Joe"); 
m1.setAge(19); 
name=m1.getName(); 
age=m1.getAge(); 
cout<<"name is:"<<name<<endl;
cout<<"age is:"<<age<<endl;
m2.setName("Huang");
m2.setAge(2);
name=m2.getName();
age=m2.getAge();
cout<<"name is:"<<name<<endl;
cout<<"age is:"<<age<<endl;
m3.setName("Sam");
m3.setAge(109);
name=m3.getName();
age=m3.getAge();
cout<<"name is:"<<name<<endl;
cout<<"age is:"<<age<<endl;
m4.setName("Scott");
m4.setAge(29);
name=m4.getName();
age=m4.getAge();
cout<<"name is:"<<name<<endl;
cout<<"age is:"<<age<<endl;



} 
