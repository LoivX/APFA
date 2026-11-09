//from chapter 2
#include <stdio.h>

void strcat2(char s[], char t[])
{
int i, j;
    i=j=0;
    while (s[i]!='\0')
        i++;
    while ((s[i++]=t[j++])!='\0') ; 
}