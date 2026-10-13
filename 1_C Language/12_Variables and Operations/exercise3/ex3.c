#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;
    float root1, root2, Delta;
    enum isReal {FALSE, TRUE};

    enum isReal realRoots = TRUE;

    //getting the coefficient values from the user
    printf("This program calculates the roots of a quadratic equation\n");
    printf("Enter the value of the quadratic coefficient: ");
    scanf("%f", &a);
    printf("Enter the value of the linear coefficient: ");
    scanf("%f", &b);
    printf("Enter the value of the constant term: ");
    scanf("%f", &c);

    printf("The equation is: %f*x^2 + %f*x + %f = 0\n", a, b, c);

    if(b == 0) {
        (-c/a) > 0 ? printf("Roots are: %f and %f\n", sqrt(-c/a), -sqrt(-c/a)) : printf("No real solution: Roots are imaginary\n");
    }
    else {
        Delta = (b*b) - (4*a*c);
        Delta >= 0 ? printf("Roots are: %f and %f\n", (-b + sqrt(Delta))/(2*a), (-b - sqrt(Delta))/(2*a)) : printf("No real solution: Roots are imaginary\n");
    }


}