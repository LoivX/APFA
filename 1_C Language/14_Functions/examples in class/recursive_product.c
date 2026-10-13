#include <stdio.h>

int recursiveProduct(int number1, int number2) {
    if (number2 == 0 || number1 == 0) return 0;
    else return number1 + recursiveProduct(number1, number2 - 1);
}

int main() {
    int a, b;

    printf("Enter two integers to calculate their product: \n");
    printf("First integer: ");
    scanf("%d", &a);
    printf("Second integer: ");
    scanf("%d", &b);

    printf("The product of %d and %d is %d\n", a, b, recursiveProduct(a, b));
}