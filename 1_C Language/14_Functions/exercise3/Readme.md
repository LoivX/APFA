# Exercise 3 #
## Exercise Rubric ##
Write a program that asks the user for 10 values and calculates the square root of each.
To compute the square root, write a function with the following prototype:
double square_root(double a, double prec);
that calculates the value, rounded to prec decimal places, of the square root of a using Newton's method: x_{i+1} = \frac{1}{2} (x_i + \frac{a}{x_i})

x_i  are successive approximations of the square root of a. Let x_0 = a, and iterate until x_i-x_{i+1} > prec.
Ask your program/function to also print the number of iterations needed to converge to the solution.
Then, study (ideally with a plot) how the number of iterations varies as a function of the requested precision
for a given input value a.

## Exercise comments ##