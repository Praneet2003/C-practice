//Call by value:
//In call by value, actual parameters are copied to formal parameters 
//and these two different parameters store value at 
//different memory loactaions
#include<stdio.h>
void increment(int x, int y);
int main(){
    int x = 20, y =40;
    increment(x,y);
    printf("%d,%d\n",x,y);//Vlaue doesn't change it remains same x=20 & y = 40
}
void increment(int x, int y){
    x=x+1;
    y=y+1;
    printf("%d,%d",x,y);//x=21 & y=41 value got incremented by 1
    //After increment, it gets deleted
}
//OUTPUT:-
// 21,41
// 20,40