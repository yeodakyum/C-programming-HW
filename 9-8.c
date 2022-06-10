#include <stdio.h>

int main(){
  int arrA[3][3]; //declare matrix
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
  printf("sum of matrices A+B: \n");

  for(int i =0; i<3; i++){ //print sum of matrix
    printf("%d %d %d", arrA[0][i]+arrB[0][i], arrA[1][i]+arrB[1][i], arrA[2][i]+arrB[2][i]);
  }

}