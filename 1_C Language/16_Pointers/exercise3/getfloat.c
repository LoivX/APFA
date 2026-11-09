#include <ctype.h>
#include <stdio.h>

#define  BUFSIZE  100
char  buf[BUFSIZE]; /* buffer per ungetch */
int  bufp=0; /* prossima posizione libera in buf[] */

int getch(void);
void ungetch(int);
int getfloat(float *pn);

int main() {
    float number;
    int result;

    printf("Enter a floating-point number: ");
    result = getfloat(&number);

    if (result != 0) {
        printf("You entered: %f\n", number);
    } else {
        printf("Invalid input.\n");
    }
}


int  getch(void) /* preleva un carattere (che potrebbe essere stato rifiutato in precedenza) */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void  ungetch(int c) /* rimette un carattere nell’input */
{
    if (bufp>=BUFSIZE)
        printf("ungetch: troppi caratteri\n");
    else
        buf[bufp++]=c;
}

/* getfloat: get next floating-point number from input into *pn */
int getfloat(float *pn)
    {
        int c, sign;
        float val, power;
        while (isspace(c = getch())) /* skip white space */
            ;
        if (!isdigit(c) && c != EOF && c != '+' && c != '-') 
        {
            ungetch(c);  /* it's not a number */
            return 0;
        }
        sign = (c == '-') ? -1 : 1;
        if (c == '+' || c == '-')
            c = getch();

        for (val = 0; isdigit(c); c = getch())
            val = 10 * val + (c - '0');

        if (c == '.')
            c = getch();

        for (power = 1; isdigit(c); c = getch()) {
            val = 10 * val + (c - '0');
            power *= 10;
        }

        *pn = sign * val / power;

        if (c != EOF)
            ungetch (c) ;

        return c;
    }
