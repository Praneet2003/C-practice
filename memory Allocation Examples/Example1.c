// You are using GCC
#include <stdio.h>
#include <stdlib.h>

int main() {
        int N, X, Y;
        
            // Input the initial number of songs
                printf("Enter the initial number of songs: ");
                    scanf("%d", &N);
                    
                        // Allocate memory for the playlist
                            int *playlist = (int *)malloc(N * sizeof(int));
                                if (playlist == NULL) {
                                            printf("Memory allocation failed.\n");
                                                    return 1;
                                }
                                
                                    // Input the durations of each song
                                        printf("Enter %d space-separated integers representing the durations of each song: ", N);
                                            for (int i = 0; i < N; i++) {
                                                        scanf("%d", &playlist[i]);
                                            }
                                            
                                                // Input the range of durations to remove
                                                    printf("Enter the start and end range values (X and Y): ");
                                                        scanf("%d %d", &X, &Y);
                                                        
                                                            // Remove songs with durations within the specified range
                                                                int newSize = 0;
                                                                    for (int i = 0; i < N; i++) {
                                                                                if (playlist[i] < X || playlist[i] > Y) {
                                                                                                playlist[newSize++] = playlist[i];
                                                                                }
                                                                    }
                                                                    
                                                                        // Resize the playlist
                                                                            int *temp = (int *)realloc(playlist, newSize * sizeof(int));
                                                                                if (temp == NULL) {
                                                                                            printf("Memory reallocation failed.\n");
                                                                                                    free(playlist);
                                                                                                            return 1;
                                                                                } else {
                                                                                            playlist = temp;
                                                                                }
                                                                                
                                                                                    // Display the updated playlist
                                                                                        printf("Updated playlist after removing songs within the range [%d, %d]: ", X, Y);
                                                                                            for (int i = 0; i < newSize; i++) {
                                                                                                        printf("%d ", playlist[i]);
                                                                                            }
                                                                                                printf("\n");
                                                                                                
                                                                                                    // Free dynamically allocated memory
                                                                                                        free(playlist);
                                                                                                        
                                                                                                            return 0;
}