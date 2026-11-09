
/*
 * add.h  --  the interface of add.c, written ONCE
 *
 * Included by main.c (the user) AND by add.c (the implementation): the
 * compiler then sees, in add.c, both the declaration that every user sees
 * and the definition, and it checks that they agree.
 */

#ifndef ADD_H
#define ADD_H

int   add (int x, int y);

#endif // ADD_H




/*qui c'è la dichiarazione della funzione add che deve essere rispettata. 
Questo file viene richiamato da altri file per utilizzare la funzione. */