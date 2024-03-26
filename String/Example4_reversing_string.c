//Revesing string
#include<stdio.h>
#include<string.h>
int main(){
    char str[5] = "Quiz";
    int i =0;
    int length = strlen(str);
    while(str[i]!=0){
        printf("%c",str[length - i-1]);
        i++;
    }
    return 0;
}
//Output:-
//ziuQ