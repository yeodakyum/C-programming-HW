#include <stdio.h>

int main(){
  int a ,i=0; //declare variable
  printf("Enter upper limit: "); //ask for input
  scanf("%d", &a);
  for(int n = 2; n <= a; n+=2){  //for loop to add the numbers
    i += n;
  }
  printf("Sum of all even number between 1 to %d = %d",a ,i );
}