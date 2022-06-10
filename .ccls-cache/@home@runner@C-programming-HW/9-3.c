#include <stdio.h>
#include <stdlib.h>

int main(){
  int* ptri = NULL; //declare pointer
  float* ptrf = NULL;
  char* ptrc = NULL;

  
  ptri = (int*) malloc(sizeof(int)); //dynamically allocate memory
  ptrf = (float*) malloc(sizeof(float));
  ptrc = (char*) malloc(sizeof(char));

  printf("Enter an integer value: "); //input values
  scanf("%d", ptri); 
  printf("Enter an float value: ");
  scanf("%f", ptrf);
  printf("Enter an charactor value: ");
  scanf(" %c", ptrc);

  printf("inputed values are: %d, %c, %.2f", *ptri, *ptrc, *ptrf); //print values
  
  free(ptri); //free memory
  free(ptrf);
  free(ptrc);
}