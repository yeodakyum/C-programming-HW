#include <stdio.h>

void check(int* a){
  if(*a %2)
    printf("The number is odd.");
  else
    printf("the number is even.");
  return;
}

int main(){
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  check(&n);
  return  0;
}