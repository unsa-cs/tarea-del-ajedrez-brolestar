#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);
  //Primera fila
  char ** row1 = superImpose(queen, whiteSquare);
  row1 = join(row1, blackSquare);
  row1 = join(row1, whiteSquare);
  row1 = join(row1, blackSquare);
  row1 = join(row1, whiteSquare);
  row1 = join(row1, blackSquare);
  row1 = join(row1, whiteSquare);
  row1 = join(row1, blackSquare);
  interpreter(row1);
}
