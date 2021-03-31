#include "kmoves.hpp"


int main(void){

  //Each element of the board is to be filled in with the number
  //of the move it was reached. 
  int mat[64] = {0,-1,-1,-1,-1,-1,-1,-1,
                 -1,-1,-1,-1,-1,-1,-1,-1,
                 -1,-1,-1,-1,-1,-1,-1,-1,
                 -1,-1,-1,-1,-1,-1,-1,-1,
                 -1,-1,-1,-1,-1,-1,-1,-1,
                 -1,-1,-1,-1,-1,-1,-1,-1,
                 -1,-1,-1,-1,-1,-1,-1,-1,
                 -1,-1,-1,-1,-1,-1,-1,-1};

  int rv = count_knight_moves(mat, 0,0);

  printf("number of moves for knight: %d\n", rv);

  print_board(mat);

}
