#include "chess.h"
#include "figures.h"

void display() {
  char** queenWhite = superImpose(reverse(queen),whiteSquare);
  interpreter(queenWhite);
}
