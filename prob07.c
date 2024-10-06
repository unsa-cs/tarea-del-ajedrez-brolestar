#include "chess.h"
#include "figures.h"

void display() {
  // Patron de 3 cuadrados consecutivos
  char ** row3 = join(reverse(whiteSquare), whiteSquare);
  row3 = join(row3, reverse(whiteSquare));
  
  // Creando el caballo y su rotado
  char ** knightBg = superImpose(knight, whiteSquare);
  char ** knightBgRot = superImpose(rotateR(knight), reverse(whiteSquare));
  
  char ** test = join(knightBg, knightBgRot);
  interpreter(test);
}
