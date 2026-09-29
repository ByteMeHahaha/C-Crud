#ifndef MENU_ACTIONS_H_INCLUDED
#define MENU_ACTIONS_H_INCLUDED

#include "penrec.h"

void mna_create(PenRecord new_pen);
PenRecord mna_read(int pen_id);
void mna_update(int pen_id, PenRecord new_pen);
void mna_delete(int pen_id);

#endif // MENU_ACTIONS_H_INCLUDED
