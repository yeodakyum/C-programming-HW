#include <stdio.h>

int main(){
  int i, j; //declare variable
  printf("Enter number to print table: "); //ask for input
  scanf("%d", &i);
  for(j=1; j<=10; j++){ // for loop to do things
    printf("%d * %d = %d\n", i ,j, i*j);
  }
  
}