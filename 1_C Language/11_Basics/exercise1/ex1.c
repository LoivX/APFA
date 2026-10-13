#include <stdio.h>

int main() {
    //Defining variables
    float A, B, C;

    //interacting with the user
    printf("Insert the first number (A): ");
    scanf("%f", &A);
    printf("Insert the second number (B): ");
    scanf("%f", &B);
    printf("Insert the third number (C): ");
    scanf("%f", &C);

    //printing requested results
    printf("A-B = %f\n", A-B);
    printf("A-B+C = %f\n", A-B+C);
    printf("A-B+C+C = %f\n", A-B+C+C);
}