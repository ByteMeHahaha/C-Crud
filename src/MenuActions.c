#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include "menu_actions.h"

/**
 * @brief Creates a new pen to add to the CSV file
 * via the CLI menu.
 *
 * @param new_pen The new pen record to add to the CSV file.
 */
void mna_create(PenRecord new_pen){
  // Attempt to create a "data" directory
  if (mkdir("data", 0755) == -1 && errno != EEXIST) {
    // Print mkdir's error if it fails and if the
    // directory doesn't already exist
    perror("mkdir");
    return;
  }

  // Open the CSV file for appending (creating if doesn't exist)
  FILE *fptr = fopen("./data/pens.csv", "a");

  // If the file couldn't be opened (returned a NULL pointer)
  if (fptr == NULL) {
    // Exit the program with an error message
    perror("Could not open file \"pens.csv\"");
    exit(EXIT_FAILURE);
  }

  // Write a line to the CSV file
  fprintf(fptr, "%s,%s,%d,%.2f\n",
    new_pen.brand,
    new_pen.model,
    new_pen.pen_type,
    new_pen.price
  );

  // Close the file
  fclose(fptr);
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
