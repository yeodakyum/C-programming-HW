#include <stdio.h>

int main(void){
float tax = 33.12;
  printf("The tax is %6.2f this year\n", tax);
  printf("The tax is %8.2f this year\n", tax);
  printf("The tax is %08.2f this year\n", tax);
  return 0;
}