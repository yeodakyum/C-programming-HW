#include <stdio.h>
void compare(int* a, int* b){
  int temp;
  if(*a > *b){
    temp = *a;
      *a = *b;
      *b = temp;
  }
  return;
}

int main(){
  int n1, n2;
  printf("Enter two numbers: ");
  scanf("%d %d", &n1, &n2);
  compare(&n1, &n2);
  printf("Maximum = %d \n minimum = %d", n2, n1);
  
}