#include "chess.h"
#include "figures.h"

void display(){
  char ** fRow = join(rook, knight);
  fRow = join(fRow, bishop);
  fRow = join(fRow, queen);
  fRow = join(fRow, king);
  fRow = join(fRow, bishop);
  fRow = join(fRow, knight);
  fRow = join(fRow, rook);
  fRow = reverse(fRow);

  char ** dualBlock = join(whiteSquare, reverse(whiteSquare));
  char ** emptyRow = repeatH(dualBlock, 4);
  char ** emptyRowReverse = reverse(emptyRow);

  fRow = superImpose(fRow, emptyRowReverse);
  interpreter(fRow);
}
