#include "chess.h"
#include "figures.h"

void display(){
  char** flip = flipV(queen);
  interpreter(flip);
}

