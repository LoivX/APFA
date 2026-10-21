#include <stdio.h>
#include <stdlib.h>

int main() {
    int **M;
    int rows, cols;
    int i,j;
    short int anyElementFound = 0;

    printf("Enter the dimension of the matrix: \n");
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrix, rows first an then columns by iterating on rows
    M = (int**)malloc(rows * sizeof(int*));
    for (i = 0; i < rows; i++) M[i] = (int*)malloc(cols * sizeof(int));


    // Read the matrix elements from the user
    printf("Insert matrix elements: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Matrix[%d][%d]= ", i, j);   
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if(M[i][j] == i+j) {
                printf("The element at position i=%d, j=%d is %d \n", i, j, M[i][j]);
                anyElementFound = 1;
            }
        }
        free(M[i]);
    }
    free(M);

    if(!anyElementFound) {
        printf("No element found such that its value is equal to the sum of its indices.\n");
    }

}