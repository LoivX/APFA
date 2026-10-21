#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int i, j, k;

    //selecting characters from s2
    for (i= 0; s2[i] != '\0'; i++) {
        //for each character in s2 we apply squeeze seen in class
        for (j = k = 0; s1[j] != '\0'; j++) {
            //printf("s1 vs s2: %c vs %c\n", s1[j], s2[i]);
            if (s1[j] != s2[i]) {
                s1[k++] = s1[j];    //k counts the actual number of characters in s1 that are not in s2
                //printf("s1 attuale: %s\n", s1);
            }
            //printf("k:%d\n\n", k);

        }
        s1[k] = '\0'; //null character is added at the end of the new string

    }

}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    squeeze(str1, str2);

    printf("String after squeezing: %s\n", str1);
}