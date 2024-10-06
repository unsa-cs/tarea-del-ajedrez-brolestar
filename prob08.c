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

  //Segunda fila
  char ** row2 = join(blackSquare, whiteSquare);
  row2 = join(row2, blackSquare);
  row2 = join(row2, whiteSquare);
  row2 = join(row2, queenBlackBg);
  row2 = join(row2, whiteSquare);
  row2 = join(row2, blackSquare);
  row2 = join(row2, whiteSquare);
  
  //Tercera fila
  char ** row3 = join(whiteSquare, blackSquare);
  row3 = join(row3, whiteSquare);
  row3 = join(row3, blackSquare);
  row3 = join(row3, whiteSquare);
  row3 = join(row3, blackSquare);
  row3 = join(row3, whiteSquare);
  row3 = join(row3, queenBlackBg);

  //Cuarta fila
  char ** row4 = join(blackSquare, whiteSquare);
  row4 = join(row4, blackSquare);
  row4 = join(row4, whiteSquare);
  row4 = join(row4, blackSquare);
  row4 = join(row4, queenWhiteBg);
  row4 = join(row4, blackSquare);
  row4 = join(row4, whiteSquare);
  
  //Quinta fila
  char ** row5 = join(whiteSquare, blackSquare);
  row5 = join(row5, queenWhiteBg);
  row5 = join(row5, blackSquare);
  row5 = join(row5, whiteSquare);
  row5 = join(row5, blackSquare);
  row5 = join(row5, whiteSquare);
  row5 = join(row5, blackSquare);
  
  //Tablero Final
  char ** solution = up(row1, row2);
  solution = up(solution, row3);
  solution = up(solution, row4);
  solution = up(solution, row5);
  interpreter(solution);
}
