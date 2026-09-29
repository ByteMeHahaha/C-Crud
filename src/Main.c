#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // If the first argument supplied is "-v"
  if (strcmp(argv[1], "-v") == 0) {
    printf("C-Crud v0.0.1\n");
    return 0;
  }

  printf("This is a prototype of C-Crud. It does nothing yet.\n");
  return 1;
}
