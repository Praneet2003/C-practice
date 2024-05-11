//Wrirting a String into a file..
#include<stdio.h>
int main(){
    FILE *fptr;
    char ch[]="Hi";
    fptr = fopen("testing.txt","w");
    // fputs = fopen(ch,fptr);
    fclose(fptr);
    return 0;
}