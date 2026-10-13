#include <stdio.h>

long factorial (int n) {
    if(n == 0) return 1;
    else return n * factorial(n - 1);

}

int main() {
    int number;
    long factorialOfNumber;

    printf("Enter the number to calculate its factorial: ");
    scanf("%d", &number);

    factorialOfNumber = factorial(number);

    printf("The factorial of %d is %ld\n", number, factorialOfNumber);
}