# Exercise 2 #
## Exercise Rubric ##
Write a program that asks the user an integer number for 8 times, that counts the number of digits in the input number and that shows the result. The result has to be displayed after each input value. To compute the number count, write a function whose prototype is: int count_digits(int n); 


## Exercise comments ##
The number of digits is computed counting how many times the number can be divided by 10 before it becomes only decimal (less than 1). The zero is a special case because it is the only integer less than one that has 1 digit.

stdlib.h has been included to use the abs() function. It ensures that the condition to exit the loop is only satisfied when the number is included between -1 and 1.