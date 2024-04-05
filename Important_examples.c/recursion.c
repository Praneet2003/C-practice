//Sum of Numbers using recursion...... 
#include<stdio.h>
long long int sum(int);
int main(){
    int n;
    printf("Enter a positive integer: \n");
    scanf("%d",&n);
    printf("Sum of %d integer is %lld",n,sum(n));
    return 0;
}
long long int sum(int n){
    if(n==0){
        return 0;
    }else{
        return n+sum(n-1);
    }
}