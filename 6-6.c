#include <stdio.h>

void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(){
  int x,y;
  printf("Enter Value of x");
  scanf("%d",&x);
  printf("Enter Value of y");
  scanf("%d",&y);
  swap(&x, &y);
  printf("After Swapping: x = %d, y = %d", x, y);
  
}