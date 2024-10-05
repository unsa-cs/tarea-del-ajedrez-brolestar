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
*/

/*
void display() {
  char **queen_col = repeatV(queen, 8);
  char **w_col = repeatV(whiteSquare, 8);
  char **test = join(queen_col, w_col);
  interpreter(test);
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

/*
void display(){
  char ** queenCol = repeatV(queen, 8);
  char ** test = join(queenCol, queenCol);
  interpreter(test);
}
*/

/*
void display(){
  char ** whiteRow = repeatH(whiteSquare, 8);
  char ** blackRow = reverse(whiteRow);
  char ** test = up(whiteRow, blackRow); 
  interpreter(test);
}

*/

// Prueba de problema 3
void display(){
  char ** dualBlock = join(whiteSquare, reverse(whiteSquare));
  char ** emptyRow = repeatH(dualBlock, 4);
  char ** emptyRow2 = reverse(emptyRow);
  char ** dualRow = up(emptyRow2, emptyRow);
  char ** quadRow = repeatV(dualRow, 2);
  interpreter(quadRow);
}
