#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char **tiles_row = repeatH(join(whiteSquare, reverse(whiteSquare)), 4);
  interpreter(reverse(tiles_row));
  
  
}
  
