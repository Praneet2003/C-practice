#include<stdio.h>
int main(){
    float x = 20.5;
    float *ptr = &x;//Pointer of Same Datatype storing the address of float x
    float **dptr = &ptr;//Double Pointer => Capable of storing the value of address of another pointer
    printf("The address of float variable is: %x",&x);
    //gives the address of variable x as an output
    printf("The address of float variable is: %x\n", ptr);
    //gives the address of variable x as an output
    printf("The address of float pointer is : %x\n",&ptr);
    // gives the address of pointer ptr as an output
    printf("The address of float pointer using double pointer is: %x",dptr);
    // gives the address of pointer ptr as an output
    return 0;
}
//OUTPUT:-
// The address of float variable is: 47b357e4
// The address of float variable is: 47b357e4
// The address of float pointer is : 47b357d8
// The address of float pointer using double pointer is: 47b357d8