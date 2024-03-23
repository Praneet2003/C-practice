// You are using GCC
//Write a programe to take an even integer from user and spliting it as sum to two first prime 
//numbers Whoose Sum is equal to the input integer
//for ex:- 74 =3+71
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void primeDivision(int N) {
    int prime1, prime2;
    for (int i = 2; i <= N / 2; ++i) {
        if (isPrime(i) && isPrime(N - i)) {
            prime1 = i;
            prime2 = N - i;
            break;
        }
    }
    printf("%d %d\n", prime1, prime2);
}

int main() {
    int N;
    scanf("%d", &N);
    primeDivision(N);
    return 0;
}