#ifndef PENREC_H_INCLUDED
#define PENREC_H_INCLUDED

/**
 * @brief Represents a record for pen data in the CSV file
 */
typedef struct PenRecord {
  int pen_id; /**< The integer ID for the pen */
  char brand[30]; /**< The brand that made the pen */
  char model[40]; /**< The model of the pen */
  double price; /**< The price (in ZAR) for the pen */
} PenRecord;

#endif // PENREC_H_INCLUDED
