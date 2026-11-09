#include <stdio.h>
#include <math.h>

double square_root(double a, double prec); 

int main() {
    double number[10], prec;
    for (int i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%lf", &number[i]);
    }

    printf("Enter the precision: ");
    scanf("%lf", &prec);

    for (int i = 0; i < 10; i++) {
        double result = square_root(number[i], prec);
        printf("Square root of %f is approximately %f\n\n", number[i], result);
    }
}


double square_root(double a, double prec) {
    int count = 0;
    double x, x_prev;

    x = a / 2; // Initial guess

    do {
        x_prev = x;
        x = (x_prev + a / x_prev) / 2; // Newton's method
        //printf("Difference: %f\n", fabs(x_prev - x));
        count++;
    }
    while (fabs(x_prev - x) > prec);

    printf("Number of iterations needed: %d\n", count);
    return x;
}