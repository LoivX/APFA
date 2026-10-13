#include <stdio.h>

int main() {
    //defining variables
    float A, B;
    float temp;

    //interacting with the user
    printf("Insert the first number (A): ");
    scanf("%f", &A);
    printf("Insert the second number (B): ");
    scanf("%f", &B);

    //swapping values
    temp = A;
    A = B;
    B = temp;

    printf("Swapped values:\n");
    printf("A = %f\n", A);
    printf("B = %f\n", B);
}