#include <stdio.h>

int main(void) {
    char input_str[1000];
    char c;

    printf("Insert the pogram from which you want to remove comments: ");
    scanf("%c", &input_str);

    while(c = getc(input_str) != "\0") printf(c);

}
