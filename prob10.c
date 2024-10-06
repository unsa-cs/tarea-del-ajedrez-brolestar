#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);

  char ** pairSquare = join(whiteSquare, blackSquare);
  char ** emptyRow = repeatH(pairSquare,4);
}

