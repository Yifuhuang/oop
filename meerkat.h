#include<iostream>
using namespace std;



class meerkat{

    public:
       
       string name;
       int age;


meerkat(){

}

void setName(string meerName){

name=meerName;
}

string getName(){

return name;
}

void setAge(int meerAge){

age=meerAge;
}

int getAge(){

return age;
}
};

