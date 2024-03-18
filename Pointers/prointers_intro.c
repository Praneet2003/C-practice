//pointer is a variable used to store the value of address of another variable
// Format Specifier is "%x" and variable of which address is stored is denoted by "&<variable_name>"
#include<stdio.h>
int main(){
    int num =5;
    printf("Address of num is : %x",&num);
    return 0;
}
//OUTPUT:-
//Address of num is : 7a6ea9cc