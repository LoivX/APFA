#include <stdio.h>

int main() {
    //using long to avoid that the number is interpreted as a negative number when the user enters a large number
    long inputNumber = 0;

    //using a do-while loop because the loop should be executed at least once
    do {
        printf("Enter your integer number: ");
        scanf("%ld", &inputNumber);

        if (inputNumber > 0) {
            printf("You entered the positive number %ld\n", inputNumber);
            printf("Try again ;)\n");
        }

    } while(inputNumber >= 0);

    printf("Congratulations! You exited the loop by entering a negative number!\n");
}
