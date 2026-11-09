/*
 * main.c  --  same as ../main.c, but add() is known through add.h
 *
 *   gcc -c main.c
 *   gcc -c add.c
 *   gcc main.o add.o -o add_hdr
 */

#include <stdlib.h>
#include <stdio.h>

#include "add.h"

/*
 * main
 * reads a and b from argv (defaults: 1 and 2), prints a + b.
 */
int
main (int    argc,                  // number of arguments
      char  *argv[])                // the arguments
{
  int   a;
  int   b;

  {
    int   idx = 1;

    a = (argc > idx ? atoi (argv[idx++]) : 1);
    b = (argc > idx ? atoi (argv[idx++]) : 2);
  }

  int   result = add (a, b);

  printf ("adding %d and %d results in %d\n", a, b, result);
  return 0;
}
