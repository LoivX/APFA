#include <stdlib.h>
#include <stdio.h>

#if !defined(USE_LINKER)

// this will import the verbatim content of add.c here
#include "add.c"

#else

// if we do not include the add.c file, we need to declare
// the function signature; in this way, the compiler can
// compile the dode in this compilation unit sionce it knows
// what "add()" is
int add ( int, int );

#endif

int main ( int argc, char *argv[] )
{
  int a, b;
  {
    int idx = 1;
    a = ( argc > idx ? atoi(argv[idx++]) : 1 );
    b = ( argc > idx ? atoi(argv[idx++]) : 2 );
  }

  int result = add ( a, b );
  printf( "adding %d and %d results in %d\n", a, b, result );
}