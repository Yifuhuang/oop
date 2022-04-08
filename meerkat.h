#include<iostream>
using namespace std;
#ifndef MEERKAT_H
#define MEERKAT_H


class meerkat{

    public:
       
       string name;
       int age;


meerkat() ;                      
void setName(string meerName);   
string getName();
void setAge(int meerAge);        
int getAge();
~meerkat();
};
#endif
