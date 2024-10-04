#include "chess.h"
#include "figures.h"

void display(){
  char** blackTile = reverse(whiteSquare);
  interpreter(repeatH(blackTile, 3));
 }


