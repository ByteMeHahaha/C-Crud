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
 * pen record with the specified ID.
 *
 * @param pen_id The ID of the pen record to fetch.
 */
PenRecord mna_read(int pen_id){
  // TODO -> Implement logic for "read" menu action
}

/**
 * @brief Overwrites an existing pen record with a new pen record
 *
 * @param pen_id The existing pen's ID
 * @param new_pen The new pen's data
 */
void mna_update(int pen_id, PenRecord new_pen){
  // TODO -> Implement logic for "update" menu action
}

/**
 * @brief Deletes an existing pen.
 *
 * @param pen_id The ID of the pen to delete
 */
void mna_delete(int pen_id){
  // TODO -> Implement logic for "delete" menu action
}
