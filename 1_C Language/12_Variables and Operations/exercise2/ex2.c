#include <stdio.h>

int main() {
    //defining the two integer variables 
    int number1, number2;

    //getting the values from the user
    printf("Enter the first integer number: ");
    scanf("%d", &number1);
    printf("Enter the second integer number: ");
    scanf("%d", &number2);

    //checking if they are equal
    if(number1 == number2) {
        printf("The two given numbers are equal: %d and %d\n", number1, number2);
    }
    else {
        //if they're not equal check if the first is larger than the second and print the largest
        printf("The greatest number between the two given numbers is: %d\n", number1 > number2 ? number1 : number2);
    }
}