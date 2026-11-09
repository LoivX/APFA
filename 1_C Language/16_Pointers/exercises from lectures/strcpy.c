#include <stdio.h>

/* strcpy: copy t to s; array subscript version 
    void strcpy(char *s, char *t)
    {
        int i;
        i = 0;
        while ((s[i] = t[i]) != '\0')
            i++; 
    }
*/

/* strcpy: copy t to s; pointer version 1 
    void strcpy(char *s, char *t)
    {
        while((*s = *t) != '\0') 
        {
            s++;
            t++;
        }
    }
*/



/* strcpy: copy t to s; pointer version 3 */
void strcpy(char *s, char *t)
{
    while (*s++ = *t++)
        ;
}

int main() {
    char string;
    char cpy;

    printf("Insert a sequence of characters:");
    scanf("%c", &string);

    strcpy(string, cpy);

    printf("Your string is: %c", cpy);
}