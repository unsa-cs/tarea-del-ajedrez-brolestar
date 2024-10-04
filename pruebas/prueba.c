#include "chess.h"
#include "figures.h"

void display() {
  char** queenWhite = superImpose(reverse(queen),whiteSquare);
  char** queenBlack = superImpose(queen, reverse(whiteSquare)); 
  interpreter(repeatH(join(queenWhite, queenBlack), 5));
}
