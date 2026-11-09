#include <stdio.h>

void strcpy(char *s, char *t, int n)
{
    int i=0;
    while ((*s++ = *t++) || i<n)
        ;
}

int main() {
    char string;
    char cpy;
    int n;

    printf("Insert a sequence of characters:");
    scanf("%c", &string);

    printf("Insert the number of characters to copy:");
    scanf("%d", &n)

    strcpy(string, cpy, n);

    printf("Your string is: %c", cpy);
}