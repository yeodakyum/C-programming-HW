#include <stdio.h>

int main(){
  int arrA[3][3]; //declare matirx 
  int arrB[3][3];
  int result = 0;
  printf("Enter elements in matrix A of size 3x3:\n");

  for(int i =0; i<3; i++){ //input matrix
    scanf("%d %d %d", &arrA[0][i], &arrA[1][i], &arrA[2][i]);
    }
  printf("Enter elements in matrix B of size 3x3:\n");

 for(int i =0; i<3; i++){
    scanf("%d %d %d", &arrB[0][i], &arrB[1][i], &arrB[2][i]);
}
  
  if( arrA[0][0]==arrB[0][0] && arrA[1][0]==arrB[1][0] && arrA[2][0]==arrB[2][0] && arrA[0][1]==arrB[0][1] && arrA[1][1]==arrB[1][1] && arrA[2][1]==arrB[2][1] && arrA[0][2]==arrB[0][2] && arrA[1][2]==arrB[1][2] && arrA[2][2]==arrB[2][2] ) //compare matrix with absurd amount of &&
    printf("Martix A is Equal to Matrix B");
  else
    printf("Martix A is NOT Equal to Matrix B");
}
