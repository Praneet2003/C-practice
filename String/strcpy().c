//2:) The function copies the string to the another character array
//SYTAX:- char*strcpy(char*designation, const/char*source)
//Ex:-
#include<stdio.h>
#include<string.h>
int main(){
    char str1[10] = "Awesome";
    char str2[10];
    char str3[10];
    strcpy(str2,str1);
    strcpy(str3,"Well");
    puts(str2);//puts()prints the string str2
    puts(str3);
    return 0;
}
//
//NOTE:- Designation array should be large enoungh to copy to copy the source array.........
//
//Otput:-
//Awesome
//Well
