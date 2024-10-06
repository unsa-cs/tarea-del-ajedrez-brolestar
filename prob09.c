#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);
  char ** board;
  char ** pairSquare = join(whiteSquare, blackSquare);

  // Variables Peon y su alterno
  char ** whitePawn = superImpose(pawn, whiteSquare);
  char ** alterPawn = superImpose(reverse(pawn), whiteSquare);

  interpreter(alterPawn);
}
