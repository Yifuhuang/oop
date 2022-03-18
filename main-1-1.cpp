# include <iostream>

extern void printer(int array[10][10]);

int main()
{
    int array[10][10];
    for(int a=0;a<10;a++){
       for(int b=0;b<10;b++){
         array[a][b]=1;

       }

    }
    printer(array);

    return 0;
}
