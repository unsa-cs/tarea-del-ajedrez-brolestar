#include "chess.h"
#include "figures.h"

void display() {
  char ** dualBlock = join(whiteSquare, reverse(whiteSquare));
  char ** emptyRow = repeatH(dualBlock, 4);
  char ** emptyRow2 = reverse(emptyRow);
  char ** dualRow = up(emptyRow2, emptyRow);

  //Fila de piezas blancas
  char ** fRow = join(rook, knight);
  fRow = join(fRow, bishop);
  fRow = join(fRow, queen);
  fRow = join(fRow, king);
  fRow = join(fRow, bishop);
  fRow = join(fRow, knight);
  fRow = join(fRow, rook);

  //Fila peones blancos
  char ** pRow = repeatH(pawn, 8);

  //Piezas negras
  char ** fRowBlack = reverse(fRow);
  char ** pRowBlack = reverse(pRow);

  //Patrones
  char ** WhitePattern = up(fRow, pRow);
  char ** BlackPattern = up(pRowBlack, fRowBlack);

  //Patrones con fondo
  WhitePattern = superImpose(WhitePattern,dualRow);
  BlackPattern = superImpose(BlackPattern, dualRow);

  //Tablero final
  char ** final = up(WhitePattern, dualRow);
  final = up(final, dualRow);
  final = up(final, BlackPattern);

  interpreter(final);
}
