// You are using GCC
#include <stdio.h>
#include <stdlib.h>

// Function to check if two arrays are identical
int areArraysIdentical(int *arr1, int *arr2, int N) {
        for (int i = 0; i < N; i++) {
                    if (arr1[i] != arr2[i]) {
                                    return 0; // Return false if elements are different
                    }
        }
            return 1; // Return true if arrays are identical
}

// Function to rotate an array to the right by one position
void rotateArrayRight(int *arr, int N) {
        int lastElement = arr[N - 1];
            for (int i = N - 1; i > 0; i--) {
                        arr[i] = arr[i - 1];
            }
                arr[0] = lastElement;
}

int main() {
        int N;
        
            // Input the number of dance moves
                // printf("Enter the number of dance moves: ");
                    scanf("%d", &N);
                    
                        // Allocate memory for the arrays representing dance moves
                            int *moves1 = (int *)malloc(N * sizeof(int));
                                int *moves2 = (int *)malloc(N * sizeof(int));
                                    if (moves1 == NULL || moves2 == NULL) {
                                                // printf("Memory allocation failed.\n");
                                                        return 1;
                                    }
                                    
                                        // Input the first set of dance moves
                                            // printf("Enter %d space-separated integers for the first set of dance moves: ", N);
                                                for (int i = 0; i < N; i++) {
                                                            scanf("%d", &moves1[i]);
                                                }
                                                
                                                    // Input the second set of dance moves
                                                        // printf("Enter %d space-separated integers for the second set of dance moves: ", N);
                                                            for (int i = 0; i < N; i++) {
                                                                        scanf("%d", &moves2[i]);
                                                            }
                                                            
                                                                // Check if any rotation of the first array matches the second array
                                                                    int choreographyMatches = 0;
                                                                        for (int i = 0; i < N; i++) {
                                                                                    if (areArraysIdentical(moves1, moves2, N)) {
                                                                                                    choreographyMatches = 1;
                                                                                                                break;
                                                                                    }
                                                                                            rotateArrayRight(moves1, N);
                                                                        }
                                                                        
                                                                            // Print the result
                                                                                if (choreographyMatches) {
                                                                                            printf("Choreography matches.\n");
                                                                                } else {
                                                                                            printf("No matching choreography.\n");
                                                                                }
                                                                                
                                                                                    // Free dynamically allocated memory
                                                                                        free(moves1);
                                                                                            free(moves2);
                                                                                            
                                                                                                return 0;
}