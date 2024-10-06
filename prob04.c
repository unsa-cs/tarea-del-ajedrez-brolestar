#include "chess.h"
#include "figures.h"

/*
void display(){
  char ** dualBlock = join(whiteSquare, reverse(whiteSquare));
  char ** emptyRow = repeatH(dualBlock, 4);
  char ** emptyRowReverse = reverse(emptyRow);
  interpreter(emptyRowReverse);
}
*/

void display(){
  char ** pieceTuple = join(rook, join(knight, bishop));
  char ** reflectTest = flipV(pieceTuple);
  char ** test = join(pieceTuple, reflectTest);
  interpreter(test);
}
