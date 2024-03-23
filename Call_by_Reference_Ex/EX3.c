// You are using GCC
#include<stdio.h>
void even(int *a, int *b);
void even(int *a, int *b){
    for(int i = *a; i < *b; i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}
int main(){
    int a ,b;
    scanf("%d",&a);
    scanf("%d",&b);
    even(&a, &b);
}