//4:) This function compares two string charcter by character.......
//SYNTAX:- int strcmp(chr *desgination, const char* source)
//NOTE:-
//it returns integer
//Comparision of two string continue until an unmatched character if found or '\0'is found......
//
//Return Value from strcmp():-
//
//______Return Value______|______________Description_________________________________________________|
//    0                   |  If both string are identical (Equal).                                   |
//  -ive integer          |  If ASCII value of first unmathched character is less than second.       |
//  +ive integer          |  If ASCII value of the first unmatched character is greater than second. |
//Ex:-
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "ABCD", str2[] ="ABCE";
    int result;
    result = strcmp(str1,str2);
    printf("strcmp(str1,str2) = %d",result);
    return 0;
}
//on comparision of str1, str2 
//ASCII value D = 68 && E = 69;
//ASCII of E is greater than D so, it gives value as -1.
//
//Output:-
// strcmp(str1, str2) = (-1)
