#include<stdio.h>

int main(){
    int mat1[3][3];
    int mat2[3][3];
    // matrix 1 input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    // matrix 2 input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    // Add both matrix
    int mat3[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Result
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}