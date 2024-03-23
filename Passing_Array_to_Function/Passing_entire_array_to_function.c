// M2:-
// Passing the entire array to the function
#include<stdio.h>
void display(char *ptr, int len){
    for(int i =0; i<len; i++){
        printf("%c",*(ptr+i));
    }
}
int main(){
    char arr[] = {'a', 'b','c','d'};
    int length = sizeof(arr)/sizeof(char);//to find the length of the array
    display(arr,length);
    return 0;
}