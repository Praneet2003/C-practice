#include<stdio.h>
int add();
int add(){//no Arguments
    int x,y;
    scanf("%d %d",&x,&y);
    return x+y;
}
int main(){
    int c;
    c = add();
    printf("The Result is %d",c);
    return 0;
}
// Output:-
// if x = 10  and y =20
// /tmp/beoPQWWBDj.o
// The Result is 30

// === Code Execution Successful ===