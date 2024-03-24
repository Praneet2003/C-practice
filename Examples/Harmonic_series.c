// You are using GCC
#include<stdio.h>
double harmonicNumber(int n){
    if(n==1){
        return 1.0;
    }else{
        return harmonicNumber(n-1)+1.0/n;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    float a = harmonicNumber(x);
    printf("%.2f",a);
}