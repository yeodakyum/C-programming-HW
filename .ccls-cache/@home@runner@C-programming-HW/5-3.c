#include <stdio.h>

int main(){
  int n, i=2;//declare variable
  printf("Print all even numbers till : "); //ask for input
  scanf("%d", &n);
  printf("All even numbers form 1 to %d are: \n", n);
  while(i<=n){ //while loop to add all the numbers
    printf("%d\n",i );
    i+=2;
  }
  
}
