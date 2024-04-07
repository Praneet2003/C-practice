//Writing Character into a file....
#include<stdio.h>
int main(){
    FILE * fptr;
    char ch ='A';
    fptr=fopen("testing.txt","w");
    fputc(ch,fptr);
    fclose(fptr);
    return 0;
}
//Linux commands:-
// ls (list all the files)
//testing.txt writing.c (file created)
//vi.testing.txt(file opened)
//'A'(stored inside the file)