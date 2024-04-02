// 2D Array:-
// An array which stores multiple values of same datatype.
// Eg:- float arr[3][2]; 
//Declaration:-
//           data_type array_name[row_size][column_size];
// Ex:- float score[5][3];
//
//Initializing an array:-
// Eg:- int score[3][2] = {{10,20},{30,40},{50,60}};
// here 3 is no of rows and 2 is no fo columns.
// Ex:-
#include<stdio.h>
int main(){
    int x[3][2]={{10,20},{30,40},{50,60}};
    printf("the Elements of matrices are: ");
    for(int i=0; i<3;i++){
        for(int j=0; j<2;j++){
            printf("X[%d][%d] = %d",i,j,x[i][j]);
        }
    }
    return 0;
}
// Output:-
// the Elements of matrices are: 
// X[1][1] = 10
// X[1][2] = 20
// X[2][1] = 30
// X[2][2] = 40
// X[3][1] = 50
// X[3][2] = 60