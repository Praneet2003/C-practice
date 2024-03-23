// You are using GCC
#include<stdio.h>
void maxPrimeFactors(long long int n, long long int *maxPrime){
    *maxPrime = -1;
    while (n%2 ==0){
        *maxPrime = 2;
        n /= 2;
    }
    for (int i =3; i*i <=n; i+=2){
        while(n%i == 0){
            *maxPrime = i;
            n/=i;
        }
    }
    if(n>2){
        *maxPrime = n;
    }
}
int main(){
    long long int N, maxPrime;
    scanf("%lld",&N);
    maxPrimeFactors(N, &maxPrime);
    printf("%lld",maxPrime);
    return 0;
}