#include <stdio.h>

int main() {
    int number, factorialOfNumber;

    printf("Enter the number to calculate its factorial: ");
    scanf("%d", &number);
    
    factorialOfNumber = 1;
    for (int i = 1; i <= number; i++) {
        factorialOfNumber *= i;
    }

    printf("The factorial of %d is %d\n", number, factorialOfNumber);
}