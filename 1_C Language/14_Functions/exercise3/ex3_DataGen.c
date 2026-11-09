#include <stdio.h>
#include <math.h>

const double numberOfDigits = 16;
const double number = 2;

double square_root(double a, double prec); 

int main() {
    for (long int i = 1; i < pow(10,numberOfDigits); i*=10) {
        double prec = 1./i;
        double result = square_root(number, prec);
        printf("Square root of %f with precision %.15f is approximately %.20f\n\n", number, prec, result);
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