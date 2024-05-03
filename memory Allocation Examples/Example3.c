// You are using GCC
#include <stdio.h>
#include <stdlib.h>

int main() {
        int N;
            // printf("Enter the size of both arrays: ");
                scanf("%d", &N);
                    
                        // Allocate memory for the first array
                            int *array1 = (int *)malloc(N * sizeof(int));
                                if (array1 == NULL) {
                                            // printf("Memory allocation failed.\n");
                                                    return -1;
                                }
                                    
                                        // Read elements of the first array
                                            // printf("Enter the elements of the first array: ");
                                                for (int i = 0; i < N; i++) {
                                                            scanf("%d", &array1[i]);
                                                }
                                                    
                                                        // Double the size of the first array
                                                            int *temp = (int *)realloc(array1, 2 * N * sizeof(int));
                                                                if (temp == NULL) {
                                                                                    free(array1);
                                                                                            return -1;
                                                                }
                                                                    array1 = temp;
                                                                        
                                                                            // Allocate memory for the second array
                                                                                int *array2 = (int *)malloc(N * sizeof(int));
                                                                                    if (array2 == NULL) {
                                                                                                // printf("Memory allocation failed.\n");
                                                                                                        free(array1);
                                                                                                                return -1;
                                                                                    }
                                                                                        
                                                                                            // Read elements of the second array
                                                                                                // printf("Enter the elements of the second array: ");
                                                                                                    for (int i = 0; i < N; i++) {
                                                                                                                scanf("%d", &array2[i]);
                                                                                                    }
                                                                                                        
                                                                                                            // Copy elements of the second array to the end of the first array
                                                                                                                for (int i = 0; i < N; i++) {
                                                                                                                            array1[N + i] = array2[i];
                                                                                                                }
                                                                                                                    
                                                                                                                        // Print the combined array
                                                                                                                            // printf("Combined array: ");
                                                                                                                                for (int i = 0; i < 2 * N; i++) {
                                                                                                                                            printf("%d ", array1[i]);
                                                                                                                                }
                                                                                                                                    printf("\n");
                                                                                                                                        
                                                                                                                                            // Free dynamically allocated memory
                                                                                                                                                free(array1);
                                                                                                                                                    free(array2);
                                                                                                                                                        
                                                                                                                                                            return 0;
}