#include "kmoves.hpp"



void print_board(int* mat){

  printf("Board status:\n");
  for(int i=0;i<8;i++){
    for(int j = 0; j < 8; j++){
      printf("%d ", mat[i*8 + j]);
    }
    printf("\n");
  }
}


int count_knight_moves(int* mat, int m, int n){

  //students to implement

  return 0;
}
