#include <stdio.h>

int main(void){
  int input; //declare variable
  printf("Enter any number: ");
  scanf("%d", &input);//take input
  if(input == 0) printf("Number is ZERO");//print result
  else if (input <0) printf("Number is NEGATIVE");
  else printf("Number is positive");
  return 0; //end program
}