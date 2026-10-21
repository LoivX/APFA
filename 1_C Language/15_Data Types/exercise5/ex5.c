#include <stdio.h>

int factorial_int (int n);
float factorial_float (int n);
double factorial_double (int n);
long factorial_long (int n);

int main() {
    int number, factorialOfNumber;

    printf("Enter the upper limit: ");
    scanf("%d", &number);

    //verifying overflow with a loop
    for (int i = 1; i <= number; i++) {
        printf("\ni: %d\n", i);
        printf("Factorial of %d with int datatype: %d\n", i, factorial_int(i));
        printf("Factorial of %d with float datatype: %f\n", i, factorial_float(i));
        printf("Factorial of %d with double datatype: %lf\n", i, factorial_double(i));
        printf("Factorial of %d with long datatype: %ld\n", i, factorial_long(i));

    }

}

int factorial_int (int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

float factorial_float (int n) {
    float factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return (float)factorial;
}

double factorial_double (int n) {
    double factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return (double)factorial;
}

long factorial_long (int n) {
    long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}