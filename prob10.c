#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);
  char ** pairSquare = join(whiteSquare, blackSquare);
  char ** emptyRow = repeatH(pairSquare, 4);
  
  // Variables Peon y su alterno
  char ** whitePawn = superImpose(pawn, whiteSquare);
  char ** alterPawn = superImpose(reverse(pawn), whiteSquare);

  // 1997 5ª partida, Kasparov contra Deep Blue

  // Primera fila
  char ** row1 = emptyRow;

  // Segunda fila
  char ** row2 = join(reverse(whitePawn), alterPawn);
  row2 = join(row2, reverse(pairSquare));
  row2 = join(row2, reverse(pairSquare));
  row2 = join(row2, reverse(alterPawn));
  row2 = join(row2, whiteSquare);

  // Tablero
  char ** board =  up(row1, row2);
  interpreter(board);
  
}

