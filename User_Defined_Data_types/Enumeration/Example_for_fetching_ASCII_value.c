//Fetching The ASCII value of character using union:
#include<stdio.h>
union test {
    char character;
    int integer;
};
int main(){
    union test t;
    t.character = 'A';
    printf("The Value of Character Variabke is : %c\n",t.character);
    printf("The value of integer variable is %d",t.integer);
    return 0;
}
//Output:
// The Value of Character Variabke is : A
// The value of integer variable is 65

//Some Variation in abouve code
//We will use th concept of same memory location of union
#include<stdio.h>
union test {
    char character;
    int integer;
};
int main(){
    union test t;
    t.character = 'A';
    printf("The Value of Character Variabke is : %c\n",t.character);
    printf("The value of integer variable is %d\n",t.integer);
    t.integer =66;
        printf("The New Value of Character Variabke is : %c\n",t.character);
    printf("The New value of integer variable is: %d",t.integer);
    return 0;
}
//Output:-
// The Value of Character Variabke is : A
// The value of integer variable is: 65
// The New Value of Character Variabke is : B
// The New value of integer variable is: 66