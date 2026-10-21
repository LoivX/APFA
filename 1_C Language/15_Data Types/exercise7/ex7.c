#include <stdio.h>
#include <stdlib.h>

int main() {
    int **M;
    int **MT;
    int rows, cols;
    int i,j;

    printf("Enter the dimension of the matrix: \n");
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrices, using rows and columns alternatively for M and MT
    M = (int**)malloc(rows * sizeof(int*));
    for (i = 0; i < rows; i++) M[i] = (int*)malloc(cols * sizeof(int));

    MT = (int**)malloc(cols * sizeof(int*));
    for (i = 0; i < cols; i++) MT[i] = (int*)malloc(rows * sizeof(int));


    // Read the matrix elements from the user
    printf("Insert matrix elements: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Matrix[%d][%d]= ", i, j);   
            scanf("%d", &M[i][j]);
        }
    }

    //using a single nested loop to assign elements, print them and free the memory of the original matrix
    printf("The transposed matrix is: \n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            MT[i][j] = M[j][i];
            //printf("The element at position i=%d, j=%d is %d \n", i, j, M[j][i]);
            //printf("The element at position i=%d, j=%d in the transposed matrix is %d \n", j, i, MT[i][j]);
            printf(" %3d", MT[i][j]);
        }
        printf("\n");
        free(MT[i]);
    }
    free(MT);

    for (i = 0; i < rows; i++) {
        free(M[i]);
    }
    free(M);
}