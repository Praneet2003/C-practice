//Whenever a value is given to a variable of type char then, it;s ASII value get stored in the memory
//Ex1:)
#include<stdio.h>
int main(){
    char ch = 'A';
    printf("%d ",ch);
    printf("%c",ch);
    return 0;
}
//Output:-
//65 A
//
//Ex2:)
#include<stdio.h>
union test
{
    /* data */
    int integer;
};
int main(){
    union test t;
    printf("Size of chracter variable is: %d",sizeof(char));//1
    printf("Size of integer variable is: %d",sizeof(int));//4
    printf("Size of Union variable is: %d",sizeof(t));//the max size of datatype is 4, hence the sizeof(t) will also be 4
    return 0;
}
//Output:-
//Size of chracter variable is: 1
//Size of integer variable is: 4
//Size of union variable is: 4.