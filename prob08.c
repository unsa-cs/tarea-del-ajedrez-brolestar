#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);
  char ** queenBlackBg = superImpose(queen, blackSquare);
  char ** queenWhiteBg = superImpose(queen, whiteSquare);
  //Primera fila
  char ** row1 = queenWhiteBg;
  row1 = join(row1, blackSquare);
  row1 = join(row1, whiteSquare);
  row1 = join(row1, blackSquare);
  row1 = join(row1, whiteSquare);
  row1 = join(row1, blackSquare);
  row1 = join(row1, whiteSquare);
  row1 = join(row1, blackSquare);

  //Segun fila
  char ** row2 = join(blackSquare, whiteSquare);
  row2 = join(row2, blackSquare);
  row2 = join(row2, whiteSquare);
  row2 = join(row2, queenBlackBg);
  row2 = join(row2, whiteSquare);
  row2 = join(row2, blackSquare);
  row2 = join(row2, whiteSquare);
  row2 = join(row2, blackSquare);
  
  //Tablero Final
  char ** solution = up(row1, row2);
  interpreter(solution);
}
