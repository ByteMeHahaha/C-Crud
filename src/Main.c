#include <stdio.h>
#include <string.h>
#include "penrec.h"
#include "menu_actions.h"

int main(int argc, char *argv[]) {
  // If no command line arguments were provided
  if (argv[1] == NULL) {
    // TODO -> Uncomment this code and remove the other code
    // printf("Usage: %s [-c | -v]\n", argv[0]);
    // return 1;

    printf("This is a prototype of C-Crud. It does nothing yet.\n");
    return 1;
  }

  // If the first argument supplied is "-v"
  if (strcmp(argv[1], "-v") == 0) {
    printf("C-Crud v0.0.2\n");
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

    return 0;
  }
}
