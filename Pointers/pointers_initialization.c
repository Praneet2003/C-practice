//Declaration of Pointers:-
//
//
//<datatype>*<pointer_name>;
//
//
//Initialization of pointers:-
//
//<datatype>*<pointer_name> = &<variable_name>;
// 
#include<stdio.h>
int main(){
    int num = 5;
    int *ptr = &num;
    printf("Address of Variable is: %x",&num);
    //
    //Fetching the Values valiable using Pointers
    //
    printf("the value of variable is %x",*ptr);
    return 0;
}

