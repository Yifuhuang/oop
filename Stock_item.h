#ifndef Stock
#define Stock
#include <iostream>


class Stock_item{
private:
std::string description;
int code_number;
public:
Stock_item();                  // a default constructor 
// a constructor that takes the item description and the item code number as inputs
Stock_item(std::string description, int code_number);      
std::string get_description();    // returns the item description
int get_item_number();       // returns the code number of the item
~Stock_item();               //A default destructor

 
 
};
#endif