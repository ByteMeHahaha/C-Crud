#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include "menu_actions.h"

/**
 * @brief Creates a new pen to add to the CSV file
 * via the CLI menu. Appends the new pen at the end of
 * the CSV file.
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

  // Readable CSV label for pen type
  char pen_type[35];

  switch (new_pen.pen_type) {
    case 0:
      strcpy(pen_type, "Other");
      break;
    case 1:
      strcpy(pen_type, "Fountain Pen");
      break;
    case 2:
      strcpy(pen_type, "Ballpoint Pen");
      break;
    case 3:
      strcpy(pen_type, "Rollerball Pen");
      break;
  }

  // Write a line to the CSV file
  fprintf(fptr, "%s,%s,%s,%.2f\n",
    new_pen.brand,
    new_pen.model,
    pen_type,
    new_pen.price
  );

  // Close the file
  fclose(fptr);
}

/**
 * @brief Reads an existing pen record from the CSV file. Returns the
 * pen record with the specified ID.
 *
 * @param line_num The line number of the pen record to fetch.
 */
PenRecord mna_read(int line_num){
  // TODO -> Implement logic for "read" menu action
}

/**
 * @brief Overwrites an existing pen record with a new pen record
 *
 * @param line_num The line number in the CSV file
 * @param new_pen The new pen's data
 */
void mna_update(int line_num, PenRecord new_pen){
  // TODO -> Implement logic for "update" menu action
}

/**
 * @brief Deletes an existing pen.
 *
 * @param line_num The line number in the CSV file
 */
void mna_delete(int line_num){
  // TODO -> Implement logic for "delete" menu action
}
