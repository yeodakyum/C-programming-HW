#include <stdio.h>

int main(){
  int a, i, j, rev=0;
  printf("Enter an integer: ");

  scanf("%d",&a);
  i = a;
    while(i!=0){
      j = i % 10;
      rev *= 10;
      rev += j;
      
      i = i/10;
    }
    if(rev == a)
      printf("A palindrome");
    else
      printf("Not a palindrome");
  2

}