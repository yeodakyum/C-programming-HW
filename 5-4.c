#include <stdio.h>

int main(){
  int n, i; //declare variable
  printf("Print all even numbers till : "); //ask for input
  scanf("%d", &n);
  printf("All even numbers form 1 to %d are: \n", n);
  for(i=2 ; i<=n ; i+=2){ // for loop to print numbers
    printf("%d\n",i );
  }
  
}
