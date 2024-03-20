#include<stdio.h>
#include<stdlib.h>
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp; 
}
int main(){
    int a,b;
    scanf("%d %d",a,b);
    printf("Before Swapping Values were: %d %d",a,b);
    swap(a,b);//Calling the function
    printf("After Swapping the values are: %d %d",a,b);
    return 0;
}
//HERE THE SWAPPING IS NOT REFLECTED ON THE ACTUAL PARAMETERS
//ONLY IT IS DONE ON THE COPIED FORMAL PARAMETRS HAVING  DIFFERENT MEMORY LOCATION
// Output:-
// /tmp/X2KiXjRuGh.o
// Before Swapping Values were: 20 10
// After Swapping the values are: 20 10

// === Code Execution Successful ===