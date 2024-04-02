//Aray is a variable which stores multiple values of same data type.
//Important points related to array:-
// * array has 0 as the first index and not 1.
// * If the size of an array is n , then to acess tha last element, (n-1) index is used.
//
//1D-Array:-
//
//Declaration:-
//           data_type array_name[array_size];
// Ex:- float score[5];
//
//Initializing an array:-
// Eg:- int score[5] = {10,20,30,40,50};
// Eg:- int score[] = {10,20,30,40,50};
//Ex:- To Print the marks of subject from an array:-
#include<stdio.h>
int main(){
    int score[5]={70,89,91,85,89};
    printf("The marks Obtained by the Student:- ");
    for(int i=0; i<5; i++){
        printf("\nSub_%d = %d",i+1,score[i]);
    }
    return 0;
}
//Output:- 
// The marks Obtained by the Student:- 
// Sub_1 = 70
// Sub_2 = 89
// Sub_3 = 91
// Sub_4 = 85
// Sub_5 = 89
