#include <stdio.h>

int main(){
  float a, c;//declare variable
  char b;
  
  printf("SIMPLE CACULATOR\n"); 
  printf("Enter [number1] [+ - * /] [number2]\n");
  scanf("%f %c %f", &a, &b, &c); //take input

  switch(b){
    case '+':
      printf("%0.2f + %0.2f = %0.2f",a, c, a+c ); //print result
      break;
    case '-':
      printf("%0.2f - %0.2f = %0.2f",a, c, a-c );//print result
      break;
    case '*':
      printf("%0.2f * %0.2f = %0.2f",a, c, a*c );//print result
      break;
    case '/':
      printf("%0.2f / %0.2f = %0.2f",a, c, a/c );//print result
      break;

  }
  return 0;//end program

}