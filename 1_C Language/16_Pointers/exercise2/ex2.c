#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solveQuadratic(float a, float b,float c);

int main() {
    float *a[5];
    float *b[5];
    float *c[5];
    float root1, root2;

    for(int i = 0; i < 5; i++) {
        a[i] = (float *)malloc(sizeof(float));
        b[i] = (float *)malloc(sizeof(float));
        c[i] = (float *)malloc(sizeof(float));

        printf("Enter value for a[%d]: ", i);
        scanf("%f", a[i]);

        printf("Enter value for b[%d]: ", i);
        scanf("%f", b[i]);

        printf("Enter value for c[%d]: ", i);
        scanf("%f", c[i]);
    }

    for(int i = 0; i < 5; i++) {
        solveQuadratic(*a[i], *b[i], *c[i]);
        free(c[i]);
        free(b[i]);
        free(a[i]);
    }
}

//function to solve quadratic equation and print out results
void solveQuadratic(float a, float b, float c) {
    float delta = b*b - 4*a*c;
    float root1, root2;

    if (delta < 0) {
        printf("No real roots for equation %3.fx^2 + %3.fx + %3.f.\n", a, b, c);
        return;

    } else {
        root1 = (-b + sqrt(delta)) / (2*a);
        root2 = (-b - sqrt(delta)) / (2*a);
    }

    printf("Roots for equation %3.fx^2 + %3.fx + %3.f: %5.2f, %5.2f\n", a, b, c, root1, root2);
    return;
}