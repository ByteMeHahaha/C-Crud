#include <string.h>
#include "pentypes.h"

PenTypes str_to_pentype(char *typestr) {
  if (strcmp(typestr, "Other") == 0) {
    return OTHER;
  } else if (strcmp(typestr, "Fountain Pen") == 0) {
    return FOUNTAIN;
  } else if (strcmp(typestr, "Ballpoint Pen") == 0) {
    return BALLPOINT;
  } else if (strcmp(typestr, "Rollerball") == 0) {
    return ROLLERBALL;
  }

  // Invalid/unknown string
  return OTHER;
}

const char* pentype_to_str(PenTypes pt) {
  switch (pt) {
    case FOUNTAIN:
      return "Fountain Pen";
    case BALLPOINT:
      return "Ballpoint Pen";
    case ROLLERBALL:
      return "Rollerball";
    case OTHER:
    default:
      return "Other";
  }
}
