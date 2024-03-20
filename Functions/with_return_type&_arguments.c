#include<stdio.h>
#include<stdlib.h>
int add(int x, int y);
int add(int x, int y){
    int z;
    z=x+y;
    return 0;
}
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = add(a,b);
    printf("The Result is : %d",c);
    return 0;
}