//1:) NULL Pointers:-
//int*p = null;
#include<stdio.h>
int main(){
    int a =10;
    char b = 'x';
    int *p = &a;
    p = &b;
    printf("%d",*p);
    //we can also change the value of pointers anytime similar to a variable
//2:) VOID pointers:-
// *NO Datatype is associated with it.
// *CAn hold address of any datatype.
// *Typecasted to any other Datatype.
    int c = 5;
    void *ptr = &c;
    printf("%d",ptr);
    printf("%d",*(int*)ptr);//output as 10
    return 0;
//3:) CONSTANT pointers
    int value = 5;
    int value = 6;
    int *const ptr = &value;
}


