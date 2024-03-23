//Example for Calculation of Factorial
#include<stdio.h>
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n =3;
    printf("%d",fact(n));
    return 0;
}
//printf(fact(3))
//fact(3)=> return 3*fact(2)
//fact(2)=> return 2*fact(1)
//fact(1)=> return 1
