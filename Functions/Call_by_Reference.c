//Call_by_Reference
//here both actual and formal parameters refer to same memory loaction,
//therefore any changes made to the formal parameters will get reflected to actual parameters
//Also INstead of Passing values, Addresses are Passed.
//Example:-
//swaping the values of two integers using pointers
#include<stdio.h>
void swap(int *ptr1, int *ptr2);
int main(){
    int x=20, y=40;
    swap(&x,&y);//Calling portion of the function
    printf("%d,%d",x,y);
}
void swap(int *ptr1, int *ptr2){
    *ptr1 = 40;
    *ptr2 = 20;
    //This cause changing the value at same memory locations.........
    //Assume xyz, abc are address of x & y
    // at xyz address = *ptr1 = x will get the value of 40
    // at abc address = *ptr2 = y will get the value of 20
}
