/*
 * add_double.c  --  the "improved" add() again, but now it includes add.h.
 *
 *   gcc -c add_double.c
 *
 * does not compile: "conflicting types for 'add'". The error comes out at
 * compile time, in the file that was changed, instead of as garbage at
 * run time in some other file.
 */

#include "add.h"

/*
 * add
 * returns x + y, in double precision.
 */
double
add (double x,                      // first addend
     double y)                      // second addend
{
  return x + y;
}


//qui c'è un'alrta definizione di add, ma non corrisponde con la dichiarazione presente in add.h, quindi darà errore