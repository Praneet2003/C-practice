#include<stdio.h>
#include<ctype.h>
int main(){
    char ch = 'a';
    if(isalpha(ch)){
        if(islower(ch)){
            printf("It was lowerCase and it's UpperCase is %c\n",toupper(ch));
        }else{
            printf("It was already an UpperCase %c\n",ch);
        }
    }else{
        printf("It is not an Alphabet");
    }
    return 0;
}
//
//OUTPUT:-
//It is lowerCase and it's UpperCase is A