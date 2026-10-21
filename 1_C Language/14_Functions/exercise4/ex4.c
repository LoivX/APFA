#include <stdio.h>
#include <stdlib.h>

int computeFibonacci(int n);

int main() {
    int n, nthFibonacci;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Warning: The entered number is negative. The absolute value will be used.\n");
        n = abs(n);
    }

    nthFibonacci = computeFibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, nthFibonacci);
}

//this recursive function checks for base cases then returns the sum of the two previous Fibonacci numbers until it reaches the base cases
int computeFibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return computeFibonacci(n - 1) + computeFibonacci(n - 2);
    }
}