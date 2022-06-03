#include "StoreChain.h"

StoreChain::StoreChain(){


chains=new RecordStore*[5];

for(int i=0;i<5;i++){


if(i==0){
AmoebaTickets* cur=new AmoebaTickets("Store1");
chains[i]=cur;


}

if(i==1){
Amoeba* cur=new  Amoeba("Perth");

    chains[i]=cur;
}

if(i==2){
Amoeba* cur=new  Amoeba("Adelaide");

    chains[i]=cur;

    
}

if(i==3){
Amoeba* cur=new  Amoeba("Darwin");

    chains[i]=cur;

    
}
 
 if(i==4){
AmoebaTickets* cur=new AmoebaTickets("Store2");
chains[i]=cur;

    
}

}
}



RecordStore** StoreChain::get_chain(){
return chains;
}