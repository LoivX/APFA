# Exercise 4 #
## Exercise Rubric ##
Write a program that reads a series of non-negative integers from the keyboard and prints them. The program stops when a negative number is entered (which is not printed)

## Exercise comments ##
In this program i choose to use long int to store the variable because if the input number is too large then it can be interpreted as negative when read due to overflow of information into the bit associated to the sign. 
Notice that no check on what type of data has been inserted nor any casting were made. This implies that by inserting a different type of data the program breakes, specifically:
- chars are ignored
- floats start an infinite loop