//typedef Keyword:-
//it is used to give new name to existing data types
//Syntax:)
//typedef existing_data_type new_name;
//Ex_1:-
#include<stdio.h>
typedef int Integer;//Now the datatype named int can be named as Integer.
void main(){
    Integer value = 100;
    printf("The value using typedef is: %d",value);
    return 0;
}
//Ex_1:-
#include<stdio.h>
typedef unsigned int UI;//Now the datatype named unsigned int can be named as UI.
void main(){
    UI value = 100;
    Printf("The value using typedef is: %d",value);
    return 0;
}  