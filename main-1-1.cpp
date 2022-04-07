#include<iostream>


#include"meerkat.h"
using namespace std;
int main(){

string name;
int age;
meerkat man1,man2,man3,man4; 
man1.setName("Joe"); 
man1.setAge(19); 
name=man1.getName(); 
age=man1.getAge(); 
cout<<"name is:"<<name<<endl;
cout<<"age is:"<<age<<endl;
man2.setName("Huang");
man2.setAge(2);
name=man2.getName();
age=man2.getAge();
cout<<"name is:"<<name<<endl;
cout<<"age is:"<<age<<endl;
man3.setName("Sam");
man3.setAge(109);
name=man3.getName();
age=man3.getAge();
cout<<"name is:"<<name<<endl;
cout<<"age is:"<<age<<endl;
man4.setName("Scott");
man4.setAge(29);
name=man4.getName();
age=man4.getAge();
cout<<"name is:"<<name<<endl;
cout<<"age is:"<<age<<endl;



} 
