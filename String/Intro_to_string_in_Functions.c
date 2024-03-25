//String are defined as one dimension array of characters
//
//Declaration of String:- 
//Char str_name [size]// here size represents the length of the string
//NOTE:)
//*Size should always be one more than the total elements in the string.
//*The Extra character is NUll Chracter ('\0') which indicates the terimantion of string
//
//Name of the array is the address of the first element of the array
//Initialization of String:_
//char str[] = "Good"; //IN this type str can;t be uninitialised
//char str[10] = "Good";
//EX:-
#include<stdio.h>
int main(){
    char str[] = "Programming";
    printf("%s",str);
    return 0;
}
//Taking String as a input from user:-
#include<string.h>
int main(){
    char str[10];
    scanf("%s",str);//we can use it with ampercent or without ampercent as per our choice.
    printf("The string taken by user is : %s",str);
    return 0;
}
