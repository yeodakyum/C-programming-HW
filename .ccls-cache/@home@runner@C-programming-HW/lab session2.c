#include <stdio.h>

int main(){
  printf("Q) seconds? ");
  int a;
  scanf("%d", &a);
  printf("A)%d hours %d minutes %d seconds ", a/3600 , (a - ((a/3600)) * 3600) /60  , (a - ((a - ((a/3600)) * 3600) /60 )*60) - ((a/3600)) * 3600) ;
  return 0;
}