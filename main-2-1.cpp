#include <iostream>
#include "meerkat.h"
#include "cart.h"
using namespace std;
int main(){
meerkat man1,man2,man3,man4,man5;
man1.setName("one");
man1.setAge(2);
man2.setName("two");
man2.setAge(2);
man3.setName("three");
man3.setAge(2);
man4.setName("four");
man4.setAge(2);
man5.setName("five");
man5.setAge(2);

cart cart;
meerkat mans[5]={man1,man2,man3,man4,man5};

for (size_t i = 0; i < 5; i++){
if (cart.addMeerkat(mans[i])==false){
std::cout << "no place" <<std::endl;
}
}
cart.printMeerkats();

}





