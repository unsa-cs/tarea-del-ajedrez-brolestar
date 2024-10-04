#include "chess.h"
#include "figures.h"

/*
void display(){
  char** flip = flipV(knight);
  interpreter(flip);
}
*/

/*
void display(){
  char ** flip_h = flipH(knight);
  interpreter(flip_h);
}
*/

void display(){
  char ** rotate = rotateL(knight);
  interpreter(rotate);
}
