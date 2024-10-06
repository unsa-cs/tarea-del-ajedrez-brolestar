#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);
  char ** pairSquare = join(whiteSquare, blackSquare);

  // Variables Peon y su alterno
  char ** whitePawn = superImpose(pawn, whiteSquare);
  char ** alterPawn = superImpose(reverse(pawn), whiteSquare);

  // Fischer vs Spassky: Game 3 (1972)
  // Fila 1
  char ** row1 = repeatH(pairSquare, 3);
  char ** blackKing = superImpose(reverse(king), whiteSquare);
  row1 = join(row1, blackKing);
  row1 = join(row1, blackSquare);

  // Fila 2
  char ** row2 = reverse(repeatH(pairSquare, 2));
  row2 = join(row2, blackSquare);
  row2 = join(row2, alterPawn);
  row2 = join(row2, reverse(pairSquare));

  // Fila 3
  char ** row3 = join(pairSquare, whiteSquare);
  row3 = join(row3, reverse(whitePawn));
  row3 = join(row3, pairSquare);
  row3 = join(row3, pairSquare);

  // Tablero
  char ** board = up(row1, row2);
  board = up(board, row3);
  interpreter(board);
}
