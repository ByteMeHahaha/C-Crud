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
    printf("C-Crud v0.0.1\n");
    return 0;
  } else if (strcmp(argv[1], "-c"/* Test create */) == 0) {
    PenRecord p = {
      .pen_id = 1,
      .brand = "Parker",
      .model = "51",
      .price = 10.00
    };

    mna_create(p);

    return 0;
  }
}
