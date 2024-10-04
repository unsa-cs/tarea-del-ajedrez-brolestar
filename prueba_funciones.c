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

<<<<<<< HEAD
/*
void display(){
  char ** rotate = rotateR(knight);
  interpreter(rotate);
=======
void display() {
  char **queen_col = repeatV(queen, 8);
  char **w_col = repeatV(whiteSquare, 8);
  char **test = join(queen_col, w_col);
  interpreter(test);
>>>>>>> cab75c2 (prueba de join con columnas, al parecer las columnas deben ser del mismo tamaño para que join funcione correctamente)
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
  char ** queenCol = repeatV(queen, 8);
  char ** test = join(queenCol, queenCol);
  interpreter(test);
}
