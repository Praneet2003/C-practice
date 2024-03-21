// You are using GCC
#include<stdio.h>
#include<stdlib.h>
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double add(double x, double y){
    return x+y;
}
double subtract(double x, double y){
    return x-y;
}
double multiply(double x, double y){
    return x*y;
}
double divide(double x, double y){
    return x/y;
}
int main(){
    double x,y;
    char c;
    scanf("%c\n",&c);
    scanf("%lf  %lf",&x,&y);
    switch(c){
        case'+':
            printf("%.2lf %c %.2lf = %.2lf",x,c,y,add(x,y));
            break;
        case '-':
            printf("%.2lf %c %.2lf = %.2lf",x,c,y,subtract(x,y));
            break;
        case '*':
            printf("%.2lf %c %.2lf = %.2lf",x,c,y,multiply(x,y));
            break;
        case '/':
            if(y!=0){
                printf("%.2lf %c %.2lf = %.2lf",x,c,y,divide(x,y));
            }else{
                printf("Error: Division by zero!");
            }
            break;
        default:
            printf("Invalid operator!");
            break;
    }
}
