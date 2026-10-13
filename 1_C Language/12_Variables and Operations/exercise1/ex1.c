#include <stdio.h>

int main () {
    //defining variable to store the number to check
    int numberToCheck;
    
    //asking the user to input an integer number and storing it in the variable
    printf("Enter an integer number: ");
    scanf("%d", &numberToCheck);

    /*conditional operator to check whether the division by 2 returns a remainder or not
    Then printing accordingly to the result*/
    numberToCheck % 2 == 0 ? printf("%d is an even number.\n", numberToCheck) : printf("%d is an odd number.\n", numberToCheck);
}