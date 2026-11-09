# Exercise 9 #
## Exercise Rubric ##
Write a C program that defines struct polygon with the fields n_sides and side_length. Implement and test the following functions:

- createPolygon(void): asks the user for the number of sides and the length of one side, then returns a polygon.
- calculateArea(struct polygon p): calculates the area using \(A = \frac{n l^2}{4\tan(\pi/n)}\).
- peripoli(struct polygon p): calculates the perimeter.
- doubleperi(struct polygon *pp): doubles the side length of the polygon passed by pointer.

The program should call these functions from main and display the results.

## Exercise Comments
I decided to put a cycle to ensure that the number of sides is valid. 
The access pp->n_sides in the function double perimeter was sugested by the autocomplete after i typed "pp.n_sides" (invalid epression).