//Inbuilt string functions are only be used when <string.h> header file is included 
//1:) strlen() => it is used to calculate the length of string
//Syntax:- long int strless(string);
//Ex:-
#include<stdio.h>
#include<string.h>
int main(){
    char a[20] = "Program";
    char b[20] = {'p','r','o','g','r','a','m'};
    printf("Length of string a is : %s",a);
    printf("Length of string b is : %s",b);
    return 0;
}