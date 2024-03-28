//Memory Allocation in union variables:
//memeory allocated of size of largest member present in union defining
#include<stdio.h>
union Employee
{
    /* data */
    int Employee_id;
    char gender[10];
};
int main(){
    union Employee U;
    printf("The size of Union U is : %d",sizeof(U));
    //Here the maximum size of of integer data_type hence it will be the size of memory allocated to the union U.
    return 0;
}
