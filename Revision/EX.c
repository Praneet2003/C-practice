// You are using GCC
// Acessing the value of variable using pointers
#include<stdio.h>
int main(){
    float x =20.5;
    float y = 50.5;
    float *ptr = &x;
    float **dptr = &ptr;//double pointer(Capable of storing the address of another pointer)
    printf("The addres of float variable is: %x\n",ptr);//address of X
    printf("The value of float variable is : %f\n",x);//value of x
    printf("The address of float variable acessed through pointer is : %f\n",*ptr);//*ptr gives the value of variable stored in ptr
    //i.e value of X
    printf("The address of float variable acessed through double pointer is : %x\n",*dptr);//*dptr gives the value of variable stored in dptr 
    //i.e address of x
    //Concluded that 
    //*dptr = &x = ptr
    printf("The value of float variable accessed through double pointer is : %.2f\n",**dptr);
    return 0;
}