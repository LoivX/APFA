#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double findRootNewton1(double initialGuess, double prec);

double findRootNewton2(double initialGuess, double prec);

int main(int argc, char *argv[]){
    //defining bool var to store the choice of the user, if 0 then the user choose eq x^3 +x + 1 = 0, if 1 then the user choose eq 3x = e^x
    short int chosenEq = argc > 1 ? atoi(argv[1]) : 0;
    double prec = argc > 2 ? atof(argv[2]) : 1e-7;
    double initialGuess;
    double result;

    double (*findRootNewton)(double, double);

    if(chosenEq) {
        printf("Solving eq 3x = e^x with precision %.10lf\n", prec);
        findRootNewton = findRootNewton1;
    } else {
        printf("Solving eq x^3 + x + 1 = 0 with precision %.10lf\n", prec);
        findRootNewton = findRootNewton2;
    }

    printf("Insert the initial guess for Newton's method: ");
    scanf("%lf", &initialGuess);

    result = findRootNewton(initialGuess, prec);
    printf("The root found from the initial guess is: %.10lf\n", result);

    free(findRootNewton);
}




/*functions to solve an eq with Newton's method: give an initial guess, computes the next approximation by 
using the formula x_{n+1} = x_n - f(x_n)/f'(x_n), until the requested precision is reached.*/
double findRootNewton1(double initialGuess, double prec){
    double x = initialGuess;
    double x_prev;
    double f, f_prime;

        //eq 3x = e^x
        //f(x) = 3x - e^x
        //f'(x) = 3 - e^x
        do{
            x_prev = x;
            f = 3*x - exp(x);
            f_prime = 3 - exp(x);
            x = x_prev - f/f_prime;
        } while (fabs(x - x_prev) > prec);

    return x;
}


double findRootNewton2(double initialGuess, double prec){
    double x = initialGuess;
    double x_prev;
    double f, f_prime;

        //eq x^3 + x + 1 = 0
        //f(x) = x^3 + x + 1
        //f'(x) = 3x^2 + 1
        do{
            x_prev = x;
            f = x*x*x + x + 1;
            f_prime = 3*x*x + 1;
            x = x_prev - f/f_prime;
        } while (fabs(x - x_prev) > prec);

    return x;
}

//old findRootNewton function
/*
double findRootNewton(double initialGuess, short int chosenEq, double prec){
    double x = initialGuess;
    double x_prev;
    double f, f_prime;

    if(chosenEq){
        //eq 3x = e^x
        //f(x) = 3x - e^x
        //f'(x) = 3 - e^x
        do{
            x_prev = x;
            f = 3*x - exp(x);
            f_prime = 3 - exp(x);
            x = x_prev - f/f_prime;
        } while (fabs(x - x_prev) > prec);

    } else {
        //eq x^3 + x + 1 = 0
        //f(x) = x^3 + x + 1
        //f'(x) = 3x^2 + 1
        do{
            x_prev = x;
            f = x*x*x + x + 1;
            f_prime = 3*x*x + 1;
            x = x_prev - f/f_prime;
        } while (fabs(x - x_prev) > prec);
    }

    return x;
}
*/
