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

/*
void display(){
  char ** rotate = rotateL(knight);
  interpreter(rotate);
}
*/

/*
void display(){
  char ** rotate = rotateR(knight);
  interpreter(rotate);
}
*/

/*
void display(){
  char ** reverseR = reverse(knight);
  interpreter(reverseR);
}
*/
/*
void display(){
  char ** bishopCol = repeatV(bishop, 8);
  interpreter(bishopCol);
}
*/

void display(){
  char ** queenCol = repeatV(queenCol, 8);
  char ** test = join(queenCol, whiteSquare);
  interpreter(test);
}
