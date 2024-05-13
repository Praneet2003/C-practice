//Pointer in Array
//Indexing of an Array
//a[0],a[1],a[2],a[3].................
//Write a Program to Fetch out the Elements of an array using pointers
#include<stdio.h>
int main(){
    int a[6]={4,9,78,25,76};
    int *ptr = &a[0];
    int i;
    for(i=1;i<5;i++){
        printf("The values Arrays are %d\n",*ptr);
        ptr++;
    }
    return 0;
}
//
//OUTPUT:-
// The values Arrays are 4
// The values Arrays are 9
// The values Arrays are 78
// The values Arrays are 25