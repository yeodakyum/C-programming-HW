#include <stdio.h>

int main(){
  float total = 0;//declare variable
  float num = 0; 

  do{
    printf("Enter a number:");//ask for input
    scanf("%f", &num);
    
    total = num + total;
    
  }
  while(num);

  printf("Sum = %.2f", total);
}