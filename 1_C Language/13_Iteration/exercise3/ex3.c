#include <stdio.h>

int main() {
    int n = 0;

    //loop to force the user to insert a positive number
    while(n <= 0) {
        printf("Insert a positive number: ");
        scanf("%d", &n);
        if(n <= 0) {
            printf("The number must be positive! Try again.\n");
        }
    }

    //first loop creates new lines every iteration
    for(int i = 1; i <= n; i++) {
        //second loop appends one * every iteration
        for(int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
}