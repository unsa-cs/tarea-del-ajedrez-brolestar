#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);
  char ** pairSquare = join(whiteSquare, blackSquare);
  char ** emptyRow = repeatH(pairSquare, 4);
  
  // Variables Peon y su alterno
  char ** whitePawn = superImpose(pawn, whiteSquare);
  char ** alterPawn = superImpose(reverse(pawn), whiteSquare);

  // 1997 5ª partida, Kasparov contra Deep Blue

  // Primera fila
  char ** row1 = emptyRow;

  // Segunda fila
  char ** row2 = join(reverse(whitePawn), alterPawn);
  row2 = join(row2, reverse(pairSquare));
  row2 = join(row2, reverse(pairSquare));
  row2 = join(row2, reverse(alterPawn));
  row2 = join(row2, whiteSquare);
  
  // Tercera fila
  char ** row3 = emptyRow;

  // Cuarta fila
  char ** row4 = reverse(emptyRow);

  // Quinta fila
  char ** blackKingblackBg = superImpose(reverse(king), blackSquare);
  char ** whiteKnightblackBg = superImpose(knight, blackSquare);
  char ** row5 = join(whiteSquare, blackKingblackBg);
  row5 = join(row5, alterPawn);
  row5 = join(row5, reverse(pairSquare));
  row5 = join(row5, whiteKnightblackBg);
  row5 = join(row5, pairSquare);

  // Sexta fila
  char ** whiteRookblackBg = superImpose(rook, blackSquare);
  char ** row6 = join(blackSquare, reverse(whiteKnightblackBg));
  row6 = join(row6, reverse(pairSquare));
  row6 = join(row6, whiteRookblackBg);
  row6 = join(row6, whiteSquare);
  row6 = join(row6, reverse(alterPawn));
  row6 = join(row6, whiteSquare);

  // Septima fila
  char ** blackRookblackBg = superImpose(reverse(rook), blackSquare);
  char ** row7 = join(pairSquare, whiteSquare);
  row7 = join(row7, blackRookblackBg);
  row7 = join(row7, pairSquare);
  row7 = join(row7, pairSquare);

  // Octava fila
  char ** row8 = join(blackSquare, reverse(blackKingblackBg));
  char ** revpairSquare = reverse(pairSquare);
  row8 = join(row8, revpairSquare);
  row8 = join(row8, revpairSquare);
  row8 = join(row8, revpairSquare);

  // Tablero
  char ** board =  up(row1, row2);
  board = up(board, row3);
  board = up(board, row4);
  board = up(board, row5);
  board = up(board, row6);
  board = up(board, row7);
  board = up(board, row8);
  interpreter(board);
}

