#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);
  char ** board;
  char ** pairSquare = join(whiteSquare, blackSquare);

  // Variables Peon y su alterno
  char ** whitePawn = superImpose(pawn, whiteSquare);
  char ** alterPawn = superImpose(reverse(pawn), whiteSquare);

  // Fila 1
  char ** row1 = repeatH(pairSquare, 3);
  char ** blackKing = superImpose(reverse(king), whiteSquare);
  row1 = join(row1, blackKing);
  row1 = join(row1, blackSquare);

  interpreter(row1);
}
