#include <stdio.h>

int main(){
  int a;
  printf("number? ");
  scanf("%d", &a);
  if (a%2==0)
    printf("\neven");
  else
    printf("\nodd");

  
}