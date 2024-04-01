//Example on fopen():-
#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("example.txt","r");
    return 0;
}
//Output :-
//it gives nothing because example.txt file doesn't exist.
//
//Some important Function Related to fopen():-
// *It creates a new file if file name doesn't Exist.
// *By default file is stored at the same place where the code is stored.
//
//2:) fclose():-
//It is used to close file, to prevent it from accidental damages.
//Synatx:-
// fclose(file_pointer);
//It returns 0 if the file is closed Sucessfully,
//It returns EOF(end of file), If error Occured.
//
//#NOTE: 
// *After closing the file, file pomter can be recised to open of create other.
// *In C programming, files gets automathically Closed on program termination.
// *Uising Eclose() is a good programming practice.
