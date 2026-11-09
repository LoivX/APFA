#include <stdio.h>
#include <math.h>

#define PI 3.1415

// Structure representing a regular polygon 
struct polygon {
    int n_sides;
    double side_length;
};

// Reads the polygon data from the user and returns the structure
struct polygon createPolygon(void) {
    struct polygon p;

    do {
        printf("Enter the number of sides (at least 3): ");
        scanf("%d", &p.n_sides);
        if (p.n_sides < 3) printf("Invalid number of sides. Please enter a value of 3 or greater.\n");
    } while (p.n_sides < 3);
    
    printf("Enter the side length: ");
    scanf("%lf", &p.side_length);
    
    
    return p;
}

/* Calculates the area of a regular polygon:
   A = n * l^2 / (4 * tan(pi / n)) */
double calculateArea(struct polygon p) {
    return (p.n_sides * p.side_length * p.side_length) /
           (4.0 * tan(PI / p.n_sides));
}

// Calculates the perimeter
double peripoli(struct polygon p) {
    return p.n_sides * p.side_length;
}

// Doubles the original side length. 
void doubleperi(struct polygon *pp) {
    pp->side_length *= 2.0; 
}

int main(void) {
    struct polygon p;
    double area;

    p = createPolygon();
    area = calculateArea(p);

    printf("\nYour polygon has %d sides of length %.2f:\n", p.n_sides, p.side_length);
    printf("Area of the polygon: %.2f\n", area);
    printf("Perimeter of the polygon: %.2f\n", peripoli(p));

    /* The function changes the original structure via its address. */
    doubleperi(&p);

    printf("\nAfter doubling the side length:\n");
    printf("New side length: %.2f\n", p.side_length);
    printf("Area: %.2f\n", calculateArea(p));
    printf("Perimeter: %.2f\n", peripoli(p));

    return 0;
}
