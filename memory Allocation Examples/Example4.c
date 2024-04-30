// You are using GCC
#include <stdio.h>
// #include <cstdlib>
int main() {
        int N;
        
            // Input the number of quiz scores
                // printf("Enter the number of quiz scores: ");
                    scanf("%d", &N);
                    
                        // Allocate memory for the scores of both days
                            int *day1_scores = (int *)malloc(N * sizeof(int));
                                int *day2_scores = (int *)malloc(N * sizeof(int));
                                    if (day1_scores == NULL || day2_scores == NULL) {
                                                // printf("Memory allocation failed.\n");
                                                        return 1;
                                    }
                                    
                                        // Input quiz scores for the second day
                                            // printf("Enter %d space-separated integers for the quiz scores of the second day: ", N);
                                                for (int i = 0; i < N; i++) {
                                                            scanf("%d", &day2_scores[i]);
                                                }
                                                
                                                    // Input quiz scores for the first day
                                                        // printf("Enter %d space-separated integers for the quiz scores of the first day: ", N);
                                                            for (int i = 0; i < N; i++) {
                                                                        scanf("%d", &day1_scores[i]);
                                                            }
                                                            
                                                                // Check if the quiz scores are identical on both days using pointer comparison
                                                                    int *ptr1 = day1_scores;
                                                                        int *ptr2 = day2_scores;
                                                                            int identical = 1;
                                                                                for (int i = 0; i < N; i++) {
                                                                                            if (*ptr1 != *ptr2) {
                                                                                                            identical = 0;
                                                                                                                        break;
                                                                                            }
                                                                                                    ptr1++;
                                                                                                            ptr2++;
                                                                                }
                                                                                
                                                                                    // Print "Yes" if the quiz scores are identical, otherwise print "No"
                                                                                        if (identical) {
                                                                                                    printf("Yes\n");
                                                                                        } else {
                                                                                                    printf("No\n");
                                                                                        }
                                                                                        
                                                                                            // Free dynamically allocated memory
                                                                                                free(day1_scores);
                                                                                                    free(day2_scores);
                                                                                                    
                                                                                                        return 0;
}