#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//defining the quadrilateral structure with an array of 4 vertices coordinates, a float for the perimeter and a float for the minimum distance between any two vertices
struct quadrilateral {
    float verticiesCoord[4][2];
    float perimeter;
    float minDistanceBetweenVerticies;
};

//function to compute the perimeter
struct quadrilateral computePerimeter(struct quadrilateral quad) {
    float perimeter = 0.0;
    for (int i = 0; i < 4; i++) {
        float dx = quad.verticiesCoord[i][0] - quad.verticiesCoord[(i + 1) % 4][0];  //using modulo to make 4-cycle repeat (counting in base 4)
        float dy = quad.verticiesCoord[i][1] - quad.verticiesCoord[(i + 1) % 4][1];
        perimeter += sqrt(dx * dx + dy * dy);
    }
    quad.perimeter = perimeter;
    return quad;
}

//function to compute the minimum distance between any two vertices
struct quadrilateral computeMinDistance(struct quadrilateral quad) {
    float minDistance = 9999999999.0;  //Initializing to a very large value to avoid the failing of the if for the first iteration of the loop
    //cycling through all different pairs of vericies
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i; j++) {
            float dx_ij = quad.verticiesCoord[i][0] - quad.verticiesCoord[j][0];
            float dy_ij = quad.verticiesCoord[i][1] - quad.verticiesCoord[j][1];
            float distance = sqrt(dx_ij * dx_ij + dy_ij * dy_ij);
            
            if(distance < minDistance) {
                minDistance = distance;
            }  
        }
    }
    quad.minDistanceBetweenVerticies = minDistance;
    return quad;
}

int main() {
    struct quadrilateral quad;

    printf("Enter the coordinates of the 4 vertices of the quadrilateral (x y) clockwise or counterclockwise:\n");
    for (int i = 0; i < 4; i++) {
        printf("Vertex %c: ", 'A' + i); // Using ASCII values to print A, B, C, D
        scanf("%f %f", &quad.verticiesCoord[i][0], &quad.verticiesCoord[i][1]);
    }

    quad = computePerimeter(quad);
    quad = computeMinDistance(quad);

    printf("Perimeter of the quadrilateral: %.2f\n", quad.perimeter);
    printf("Minimum distance between any two vertices: %.2f\n", quad.minDistanceBetweenVerticies);

}