#include "chess.h"
#include "figures.h"

void display(){
  char ** blackSquare = reverse(whiteSquare);
  char ** pairSquare = join(whiteSquare, blackSquare);

  // Variables Peon y su alterno
  char ** whitePawn = superImpose(pawn, whiteSquare);
  char ** alterPawn = superImpose(reverse(pawn), whiteSquare);

  // Fischer vs Spassky: Game 3 (1972)
  // Fila 1
  char ** row1 = repeatH(pairSquare, 3);
  char ** blackKing = superImpose(reverse(king), whiteSquare);
  row1 = join(row1, blackKing);
  row1 = join(row1, blackSquare);

  // Fila 2
  char ** row2 = reverse(repeatH(pairSquare, 2));
  row2 = join(row2, blackSquare);
  row2 = join(row2, alterPawn);
  row2 = join(row2, reverse(pairSquare));

  // Fila 3
  char ** row3 = join(pairSquare, whiteSquare);
  row3 = join(row3, reverse(whitePawn));
  row3 = join(row3, pairSquare);
  row3 = join(row3, pairSquare);

  // Fila 4
  char ** row4 = join(blackSquare, alterPawn);
  row4 = join(row4, blackSquare);
  row4 = join(row4, whitePawn);
  row4 = join(row4, blackSquare);
  row4 = join(row4, pairSquare);
  row4 = join(row4, alterPawn);

  
  // Fila 5
  char ** whiteQueen = superImpose(queen, blackSquare);
  char ** row5 = join(whiteSquare, reverse(alterPawn));
  row5 = join(row5, alterPawn);
  row5 = join(row5, whiteQueen);
  row5 = join(row5, pairSquare);
  row5 = join(row5, alterPawn);
  row5 = join(row5, blackSquare);

  // Fila 6
  char ** blackBishop = superImpose(reverse(bishop), whiteSquare);
  char ** row6 = join(blackSquare, reverse(whiteQueen));
  row6 = join(row6, blackSquare);
  row6 = join(row6, blackBishop);
  row6 = join(row6, reverse(pairSquare));
  row6 = join(row6, reverse(alterPawn));
  row6 = join(row6, whiteSquare);

  // Fila 7
  char ** whiteKing = superImpose(king, whiteSquare);
  char ** row7 = join(pairSquare, pairSquare);
  row7 = join(row7, whiteKing);
  row7 = join(row7, reverse(alterPawn));
  row7 = join(row7, whiteSquare);
  row7 = join(row7, reverse(alterPawn));

  // Tablero
  char ** board = up(row1, row2);
  board = up(board, row3);
  board = up(board, row4);
  board = up(board, row5);
  board = up(board, row6);
  board = up(board, row7);
  interpreter(board);
}
