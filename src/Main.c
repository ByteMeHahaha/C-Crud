#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "penrec.h"
#include "menu_actions.h"

#define CCRUD_VERSION_INFO "v0.0.2"

int main(int argc, char *argv[]) {
  // If no command line arguments were provided
  if (argv[1] != NULL) {
    // If the first argument supplied is "-v"
    if (strcmp(argv[1], "-v") == 0) {
      // Display version info
      printf("C-Crud %s\n", CCRUD_VERSION_INFO);
      return 0;
    } else if (strcmp(argv[1], "-c") == 0) {
      // Define a test pen record
      PenRecord pen = {
        .brand = "Parker",
        .model = "51",
        .pen_type = 1,
        .price = 10.00
      };

      // Write the test record to the file
      mna_create(pen);

      // Successfully exit the program
      exit(EXIT_SUCCESS);
    }
  }

  // If no command line arguments are passed, display this message
  printf("This is a prototype of C-Crud. It does nothing yet.\n");
  // Exit thie program with a failure code
  return EXIT_FAILURE;
}
