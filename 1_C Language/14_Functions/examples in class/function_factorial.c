#include <stdio.h>

int factorial (int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int number, factorialOfNumber;

    printf("Enter the number to calculate its factorial: ");
    scanf("%d", &number);

    factorialOfNumber = factorial(number);

    printf("The factorial of %d is %d\n", number, factorialOfNumber);
}