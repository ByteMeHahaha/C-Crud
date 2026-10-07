#ifndef MENU_ACTIONS_H_INCLUDED
#define MENU_ACTIONS_H_INCLUDED

#include "penrec.h"

void mna_create(PenRecord);
bool mna_read(int, PenRecord*);
void mna_update(int, PenRecord);
void mna_delete(int);

#endif // MENU_ACTIONS_H_INCLUDED
