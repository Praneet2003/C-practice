//Memory Allocation to structure Variables.
#include<stdio.h>
struct Employee{
    char Employee_name[50];
    int Employee_id;
    int Employee_age;
    float Employee_Salary;
};
int main(){
    struct Employee E;
    printf("The memory allocation is %d",sizeof(E));
}
//Here memory Aloocation is the sum of size of all members data type
//here char = 1, int =2, int =2, float = 4
//i.e it will give Output as 9