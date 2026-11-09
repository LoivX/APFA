#define  BUFSIZE  100
char  buf[BUFSIZE]; /* buffer per ungetch */
int  bufp=0; /* prossima posizione libera in buf[] */

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