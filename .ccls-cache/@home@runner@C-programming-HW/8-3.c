#include <stdio.h>

void swap(int *a, int *b){
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;

  printf("After swapping in swap function nValue of num1 = %d\n nValue of num2 = %d\n",*a ,*b);
  
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  printf("Before swapping in main nValue of num1 = %d\n nValue of num2 = %d\n", a, b);
  swap(&a, &b);

  printf("After swapping in main nValue of num1 = %d\n nValue of num2 = %d", a, b);

  
}