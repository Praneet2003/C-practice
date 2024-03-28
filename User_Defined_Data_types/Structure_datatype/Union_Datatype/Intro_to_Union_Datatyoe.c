//Union Datatype
// It is also a user definrd datatype , which is the collection of logically related data items.
//All members shares same memory Location
//Syntax:-
union /*[unioun_tag]*/Students
{
    /* data */
    // datatype memebers;
    int id;
    int age;
    char name[50];
};
//Declaration of Union Variable:-
//M1:)
#include<stdio.h>
union Employee{
    char employee_name[50];
    int employee_id;
    float salary;
    int age;
}U1,U2;
//M2:)
union Employee{
    char employee_name[50];
    int employee_id;
    float salary;
    int age;
};
int main(){
    union Employee U3,U4;//here U1,U2 are union variables
}
