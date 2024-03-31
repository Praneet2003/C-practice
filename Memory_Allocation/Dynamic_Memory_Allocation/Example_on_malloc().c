//Example on malloc() 
//To print the counting of numbers starting from 1 to user's entered number as elements of an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n,i;//n is for taking input & i is for using for loop
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("Size of int is : %d\n",sizeof(int));
    if(ptr == NULL){
        printf("Memory not Allocated\n");
    }else{
        printf("Memory sucessfully Allocated using malloc()");
        for(i=0;i<n;++i){
            ptr[i]=i+1;
        }
    }
    printf("the elements of array are: ");
    for(i=0;i<n;i++){
        printf("%d,",ptr[i]);
    }
    return 0;
}
//Output:-
// Enter the number of Elements: 5
// Size of int is : 4
// Memory sucessfully Allocated using malloc()the elements of array are: 1,2,3,4,5,