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
    } else if (strcmp(argv[1], "-r") == 0) {
      PenRecord pn;
      int line_num = 1;

      if (mna_read(line_num, &pn)) {
        printf("Line #%d\n", line_num);
        printf("========================\n");
        printf("%s %s, %s\n", pn.brand, pn.model, pentype_to_str(pn.pen_type));
        printf("Price: %.2f\n========================\n", pn.price);

        exit(EXIT_SUCCESS);
      } else {
        printf("Pen not found at line %d\n", line_num);
        exit(EXIT_FAILURE);
      }
    }
  }

  // If no command line arguments are passed, display this message
  printf("This is a prototype of C-Crud. It does nothing yet.\n");
  // Exit thie program with a failure code
  return EXIT_FAILURE;
}
