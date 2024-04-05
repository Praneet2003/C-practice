// Calculating the sum of divisors.....
#include<stdio.h>
int sumOfDivisors(int x){
    int sum=0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            sum+=i;
            
        }
    }
    return sum;
}
int main(){
    int a;
    scanf("%d",&a);
    int r = sumOfDivisors(a);
    printf("%d",r);
}