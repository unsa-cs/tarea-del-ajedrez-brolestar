#include "chess.h"
#include "figures.h"

void display(){
  char ** dualBlock = join(whiteSquare, reverse(whiteSquare));
  char ** emptyRow = repeatH(dualBlock, 4);
  char ** emptyRow2 = reverse(emptyRow);
  char ** dualRow = up(emptyRow2, emptyRow);
  char ** quadRow = repeatV(dualRow, 2);
  interpreter(quadRow);
}
