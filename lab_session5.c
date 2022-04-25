#include <stdio.h>

int main(){
  int a;
  printf("year? ");
  scanf("%d", &a);
  if((a%100) && !(a%4) || !(a%400))
    printf("leap year");
  else
    printf("Not a leap year");

  
}
  