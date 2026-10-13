#include <stdio.h>
#include <math.h>

int main() {
    int n, closestToSqrt;
    short int isPrime = 1; // 1 means prime, 0 means not prime

    double sqrt_n;

    //Getting the number to check from the user
    printf("Enter a positive integer to check if it is prime: ");
    scanf("%d", &n);

    //saving the closest number to the sqrt
    sqrt_n = sqrt((double)n);
    closestToSqrt = (int) sqrt_n;

    /* rounding check
    printf("The closest integer to the square root of %d is %d\n", n, closestToSqrt);
    */

    for(int i = 2; i <= closestToSqrt; i++) {
        if(n % i == 0) {
            printf("%d is not a prime number", n);
            printf("\nfirst divisor found: %d\n", i);
            isPrime = 0;
            break;
        }
    }

    if(isPrime) {
            printf("%d is a prime number\n", n);
        }
}

/*goal: verify if a number is prime by checking if it is divisible by any number from 2 to the square root of the number*/