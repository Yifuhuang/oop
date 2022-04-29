#include  "Stock_item.h"

#include <iostream>


Stock_item::Stock_item(){
description=" ";
code_number=0;


}


Stock_item::Stock_item(std::string des, int code){
description=des;
code_number=code;


}

std::string Stock_item::get_description(){

    return description;
}

int Stock_item::get_item_number(){


    return code_number;
}

Stock_item::~Stock_item(){
    
}