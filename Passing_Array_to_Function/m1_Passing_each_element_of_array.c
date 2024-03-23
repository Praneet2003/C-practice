//M:-1
//Passing_each Element of array to function
#include<stdio.h>
void display(char ch){
    printf("%c\n",ch);
}
int main(){
    char arr[] ={'a','b','c','d'};
    for(int x =0; x<4; x++){
        display(arr[x]);
    }return 0;
}
//X=0 => Output:- a
//X=1 => Output:- ab
//X=2 => Output:- abc
//X=3 => Outout:- abcd
