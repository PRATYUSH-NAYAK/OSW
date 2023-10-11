#include <stdio.h>
void main(){
  int r = 3 ; 
  int c = 5 ; 
  int a[r][c] ; 
  int *pa2dcell ; 
  pa2dcell = *a ; 
  for(int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ;j++){
      arr[i][j] = i * c + j ; 
    }
  }
  
  printf("Matrix elements : \n") ; 
  for(int i = 0 ; i < r ; i ++){
    for(int j = 0 ; j < c ; j++){
      printf("%d" ,pa2dcell+i*c+j) ; 
    }
  }
  printf("\n") ; 
}
