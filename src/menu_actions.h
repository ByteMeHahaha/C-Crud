#ifndef MENU_ACTIONS_H_INCLUDED
#define MENU_ACTIONS_H_INCLUDED

#include "penrec.h"

void mna_create(PenRecord new_pen);
PenRecord mna_read(int line_num);
void mna_update(int line_num, PenRecord new_pen);
void mna_delete(int line_num);

#endif // MENU_ACTIONS_H_INCLUDED
