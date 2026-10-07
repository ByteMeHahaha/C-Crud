#include <string.h>
#include "pentypes.h"

PenTypes str_to_pentype(char typestr[50]) {
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
