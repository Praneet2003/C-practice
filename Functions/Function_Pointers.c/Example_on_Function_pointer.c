#include<stdio.h>
int func(int a, int b){
    return a+b;
}
//M1:-
// int main(){
//     int result;
//      int (*ptr)(int, int) = &func;
//      result = *ptr(10,20);
//      printf("%d",result);
// }
//M2:- 
int main(){
    int result;
    int(*ptr)(int, int) = func;//the name of function also gives its address hence no need to use ampercent here.
    result = ptr(10,20); //Also in this case *ptr is also not needed.
    printf("%d",result);
    return 0;
}