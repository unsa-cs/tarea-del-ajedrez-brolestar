#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **tiles_row = repeatH(join(whiteSquare, reverse(whiteSquare)), 4);
  int i = 0;
  while (tiles_row[i] != NULL) {
    free(tiles_row[i]);
    i++;
  }
  interpreter(tiles_row);
  free(tiles_row);
}
