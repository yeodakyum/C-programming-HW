#include <stdio.h>

int main(){
  printf("Q) number? ");
  int a;
  scanf("%d", &a);
  printf("A)\n decimal number: %d\n octal number: %o \n hexadecimal number: %x ", a,a,a);
}