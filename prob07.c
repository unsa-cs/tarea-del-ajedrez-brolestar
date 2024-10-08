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

  // Fila doble de caballos rotados
  char ** baseRowRotated = rotateR(rotateR(baseRow));
  char ** centerPattern = up(baseRow, baseRowRotated);

  // Generar 3 filas vacias
  char ** dualBlock = join(whiteSquare, reverse(whiteSquare));
  char ** emptyRow = repeatH(dualBlock, 4);
  char ** threeRowsPattern = up(emptyRow, reverse(emptyRow));
  threeRowsPattern = up(reverse(emptyRow), threeRowsPattern);

  // Tablero completo
  char ** table = up(threeRowsPattern, centerPattern);
  table = up(table, reverse(threeRowsPattern));
  interpreter(table);
}
