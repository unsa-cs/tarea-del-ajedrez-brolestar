#include "chess.h"
#include "figures.h"

void display(){
  char ** dualBlock = join(whiteSquare, reverse(whiteSquare));
  char ** emptyRow = repeatH(dualBlock, 4);
  char ** emptyRowReverse = reverse(emptyRow);
  interpreter(emptyRowReverse);
}
