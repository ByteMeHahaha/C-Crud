#include "menu_actions.h"

/**
 * @brief Creates a new pen to add to the CSV file
 * via the CLI menu. Auto-generates a sequential `pen_id` for the
 * new record.
 *
 * @param new_pen The new pen record to add to the CSV.
 */
void mna_create(PenRecord new_pen){
  // TODO -> Implement logic for "create" menu action
}

/**
 * @brief Reads an existing pen record from the CSV file. Returns the
 * pen record
 *
 * @param pen_id
 */
PenRecord mna_read(int pen_id){
  // TODO -> Implement logic for "read" menu action
}

void mna_update(int pen_id, PenRecord new_pen){
  // TODO -> Implement logic for "update" menu action
}

void mna_delete(int pen_id){
  // TODO -> Implement logic for "delete" menu action
}
