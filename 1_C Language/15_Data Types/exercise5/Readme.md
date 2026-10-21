# Exercise 5 #
## Exercise Rubric ##
Verify when overflow occurs during a call to a function which computes the factorial of a number,
depending on the return type assumed for the function.

## Exercise comments ##
As we can see from the screenshots, int overflow occours around i=13, long overflow around i=21, float overflow around i=35 while double around i=170.

However, it seems that something for float and double datatypes, something goes wrong with the last digits of the computed factorial well before getting a noticeable overflow. See print corrresponding to float datatype in "int_overflow" image for an example.