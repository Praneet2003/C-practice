// You are using GCC
#include<stdio.h>
int countZeros(int n){
    int c=0,r;
    while(n!=0){
        r=n%10;
        if(r==0){
            c++;
        }
        n=n/10;
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("The no of Zeroes are: %d",countZeros(n));
}
//Output:-
//1006
//  The no of Zeroes are: 2