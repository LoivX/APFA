#include <stdio.h>
#include <stdlib.h>

int count_digits(long int number);

int main() {
    long int numbers[8];
    int numberOfDigits;

    for (int i = 0; i < 8; i++) {
        printf("Enter number %ld: ", i + 1);
        scanf("%ld", &numbers[i]);

        numberOfDigits = count_digits(numbers[i]);

        numberOfDigits > 1 ? printf("The entered number contains %d digits.\n", numberOfDigits) : printf("The entered number contains 1 digit.\n", numberOfDigits);
    }


}

int count_digits(long int number) {
    int count = 0;
    double temp = (double)number;  // Convert the number to double for division
    
    if (number == 0) {
        return 1; // Special case for 0, which has 1 digit
    }

    // The number of digits coincides with the number of times we can divide the number by 10 before it becomes only decimal
    while (abs(temp) >= 1) {
        temp /= 10;
        count++;
    }

    return count;
}