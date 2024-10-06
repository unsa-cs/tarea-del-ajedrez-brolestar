#include "chess.h"
#include "figures.h"

/*
void display(){
  char ** dualBlock = join(whiteSquare, reverse(whiteSquare));
  char ** emptyRow = repeatH(dualBlock, 4);
  char ** emptyRowReverse = reverse(emptyRow);
  interpreter(emptyRowReverse);
}
*/

void display(){
  char ** fRow = join(rook, knight);
  fRow = join(fRow, bishop);
  fRow = join(fRow, queen);
  interpreter(fRow);
}
