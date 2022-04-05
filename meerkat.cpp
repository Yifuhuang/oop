

#include<iostream>


#include"meerkat.h"
using namespace std;
int main(){

string name;

int age;

meerkat m1,m2,m3,m4,m5; // creating 5 objects of meerkat class

m1.setName("Akshay"); // call setName() function by providing name as parameter

m1.setAge(21); // call setAge() function by providing age as parameter

name=m1.getName(); // call getName() function to get name

age=m1.getAge(); // call getAge() function to get age

printf("\n Name :%s",name.c_str()); // print name

printf("\n Age :%d",age); // print age

m2.setName("John");

m2.setAge(25);

name=m2.getName();

age=m2.getAge();

printf("\n Name :%s",name.c_str());

printf("\n Age :%d",age);

m3.setName("Rocky");

m3.setAge(28);

name=m3.getName();

age=m3.getAge();

printf("\n Name :%s",name.c_str());

printf("\n Age :%d",age);

m4.setName("David");

m4.setAge(24);

name=m4.getName();

age=m4.getAge();

printf("\n Name :%s",name.c_str());

printf("\n Age :%d",age);

m5.setName("Rony");

m5.setAge(18);

name=m5.getName();

age=m5.getAge();

printf("\n Name :%s",name.c_str());

printf("\n Age :%d",age);

} // end of main function