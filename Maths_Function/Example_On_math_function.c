//To Find Area Of a Quadilateral using heron's formula
#include<stdio.h>
#include<math.h>
float area(float w, float x, float y, float z){
    float S = (w+x+y+z)/2.0;
    float a1 = S-w;
    float a2 = S-x;
    float a3 = S-y;
    float a4 = S-z;
    printf("%f\n",S);
    printf("%f %f %f %f",a1,a2,a3,a4);
    return sqrt((S-w)*(S-x)*(S-y)*(S-z));
}
int main(){
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    float res = area(a,b,c,d);
    printf("Area of the quadilateral: %.2f",res);
}