//Arthemetic Operation on pointers
//
//new_address = current_address +/- <(i*size of(data_type))>;
#include<stdio.h>
int main(){
    int a = 50;
    int *ptr = &a;
    ptr++;
    int new_address = &a + (1*sizeof(a));
    printf("%x",&a);
}