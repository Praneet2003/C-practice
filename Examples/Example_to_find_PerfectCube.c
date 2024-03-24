// You are using GCC
#include<stdio.h>
int isPerfectCube(int n){
    if(n<0){
        return 0;
    }if(n == 0|| n ==1){
        return 1;
    }
    int i =2;
    while(i*i*i <=n){
        if(i*i*i == n){
            return 1;
        }
        i++;
    }
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    if(isPerfectCube(a)){
        printf("Perfect cube\n");
    }else{
        printf("Not a perfect cube");
    }
    return 0;
}