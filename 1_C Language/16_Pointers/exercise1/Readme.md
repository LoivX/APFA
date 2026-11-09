# Exercise 1 #
## Exercise Rubric ##
Write a program that solves alternatively one of the following equations:
3x = e^x or x^3 + x + 1 = 0
Using pointers to function and Newton's bisection method.

Let the equation be chosen by a command-line argument

## Exercise Comments ##
I inserted a flag to choose the equation and a second command line argument for the precision of the result. The two arguments have default values if nothing is entered.

Initially i built one unique function to compute the caculatoins, then the calculation has been split using two functions and a pointer to a function that changes based on the chosen equation.