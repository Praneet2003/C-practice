//Note:)
// 1=> In union ,same memory is shared by all the members.
// 2=> Changes made to one meber will be reflected to all another memebers present.
//Ex:-
#include<stdio.h>
union test
{
    /* data */
    int x,y;
};
int main(){
    union test t;
    t.x=50;
    printf("The memory allocations are: %d %d",t.x,t.y);
    t.y = 100;
    printf("The 2nd memory allocation are : %d %d",t.x,t.y);
    return 0;
}
//Output:-
// The memory allocations are: 50 50
// The 2nd memory allocations are: 100 100

