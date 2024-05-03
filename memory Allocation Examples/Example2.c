// You are using GCC
#include <stdio.h>
#include <stdlib.h>

// Function to check if an element is present in an array
int isInArray(int *arr, int size, int element) {
        for (int i = 0; i < size; i++) {
                    if (arr[i] == element) {
                                    return 1; // Return true if the element is found
                    }
        }
            return 0; // Return false if the element is not found
}

int main() {
        int N, M;
        
            // Input size of the first array
                // printf("Enter the size of the first array: ");
                    scanf("%d", &N);
                    
                        // Allocate memory for the first array
                            int *firstArray = (int *)malloc(N * sizeof(int));
                                if (firstArray == NULL) {
                                            // printf("Memory allocation failed.\n");
                                                    return 1;
                                }
                                
                                    // Input elements of the first array
                                        // printf("Enter %d elements for the first array:\n", N);
                                            for (int i = 0; i < N; i++) {
                                                        scanf("%d", &firstArray[i]);
                                            }
                                            
                                                // Input size of the second array
                                                    // printf("Enter the size of the second array: ");
                                                        scanf("%d", &M);
                                                        
                                                            // Allocate memory for the second array
                                                                int *secondArray = (int *)malloc(M * sizeof(int));
                                                                    if (secondArray == NULL) {
                                                                                // printf("Memory allocation failed.\n");
                                                                                        free(firstArray);
                                                                                                return 1;
                                                                    }
                                                                    
                                                                        // Input elements of the second array
                                                                            // printf("Enter %d elements for the second array:\n", M);
                                                                                for (int i = 0; i < M; i++) {
                                                                                            scanf("%d", &secondArray[i]);
                                                                                }
                                                                                
                                                                                    // Delete elements from the first array that are present in the second array
                                                                                        int newSize = 0;
                                                                                            for (int i = 0; i < N; i++) {
                                                                                                        if (!isInArray(secondArray, M, firstArray[i])) {
                                                                                                                        firstArray[newSize++] = firstArray[i];
                                                                                                        }
                                                                                            }
                                                                                            
                                                                                                // Resize the first array
                                                                                                    int *temp = (int *)realloc(firstArray, newSize * sizeof(int));
                                                                                                        if (temp == NULL) {
                                                                                            
                                                                                                                            free(firstArray);
                                                                                                                                    free(secondArray);
                                                                                                                                            return 1;
                                                                                                        } else {
                                                                                                                    firstArray = temp;
                                                                                                        }
                                                                                                        
                                                                                                            // Display the modified first array
                                                                                                                // printf("Modified first array after deletion: ");
                                                                                                                    for (int i = 0; i < newSize; i++) {
                                                                                                                                printf("%d ", firstArray[i]);
                                                                                                                    }
                                                                                                                        printf("\n");
                                                                                                                        
                                                                                                                            // Free dynamically allocated memory
                                                                                                                                free(firstArray);
                                                                                                                                    free(secondArray);
                                                                                                                                    
                                                                                                                                        return 0;
}