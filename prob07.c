#include "chess.h"
#include "figures.h"

void display() {
  char ** test = join(reverse(whiteSquare), whiteSquare);
  test = join(test, reverse(whiteSquare));
  char ** knightBg = superImpose(knight, whiteSquare);
  test = join(test, knightBg);
  interpreter(test);
}
