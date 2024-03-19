#include<stdio.h>
//here we are not returning anything from the function so void is used here
int main(){
    void check_even_odd(int z);//
    int x = 20;
    int y = 51;
    check_even_odd(y);
    check_even_odd(x);//parameters in function calling statement is actual parameter
    }
void check_even_odd(int z){//here the parameters are known as formal parameters
    if(z%2==0){
        printf("%d is an Even Number\n",z);
    }else{
        printf("%d is an Odd Number",z);
    }
}