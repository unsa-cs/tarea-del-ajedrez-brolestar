#include "chess.h"
#include "figures.h"

void display() {
  // Patron de 3 cuadrados consecutivos
  char ** row3 = join(reverse(whiteSquare), whiteSquare);
  row3 = join(row3, reverse(whiteSquare));
  
  // Creando el caballo y su rotado
  char ** knightBg = superImpose(knight, reverse(whiteSquare));
  char ** knightBgRot = superImpose(rotateR(knight), whiteSquare);
  
  char ** baseRow = join(reverse(row3), knightBg);
  baseRow = join(baseRow, knightBgRot);
  baseRow = join(baseRow, row3);
  interpreter(baseRow);
}
