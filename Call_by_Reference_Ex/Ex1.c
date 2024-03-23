// You are using GCC
#include <stdio.h>

int getDivisorsSum(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int areFriendlyPairs(int M, int N) {
    int sumM = getDivisorsSum(M);
    int sumN = getDivisorsSum(N);

    if ((double)sumM / M == (double)sumN / N) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int M, N;
    
    // Input
    printf("Input: ");
    scanf("%d %d", &M, &N);
    
    // Check if M and N are friendly pairs
    if (areFriendlyPairs(M, N)) {
        // Output
        printf("(%d, %d) are friendly pairs\n", M, N);
    } else {
        // Output
        printf("(%d, %d) are not friendly pairs\n", M, N);
    }
    
    return 0;
}