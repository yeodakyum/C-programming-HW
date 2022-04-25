#include <stdio.h>

int main(void) {
  int a;
  printf("Enter any number: ");
  scanf("%d", &a);
  printf("Original number = %d (in decimal)\n", a);
  printf("Number after bits are flipped = %d\n", ~a);

  return 0;
}