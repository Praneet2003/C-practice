//3:) strcat() :- This function concatenates or joins two string
//Syntax:- char*strcat(char*designation, const/char* source);
//Ex:-
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "This is", str2="C programming";
    strcat(str1,str2);
    puts(str1);
    printf("%s",str1);
    puts(str2);
    return 0;
}
//Output:-
// This is C programming
// This is C programming
// C programming