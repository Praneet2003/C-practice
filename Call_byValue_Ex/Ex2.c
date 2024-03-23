// You are using GCC
#include<stdio.h>
void shift(int *a, int *b, int *c){
    int temp =*c;
    *c = *b;
    *b= *a;
    *a = temp;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    shift(&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
}