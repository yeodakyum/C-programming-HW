#include <stdio.h>

int main(){
  int n, i ,j ; //declare variable
  printf("Enter number of colums: "); //ask for input
  scanf("%d", &n);

  for(i=0 ; i <n ; i++){ //for loop to print colums 
      for(j=0; j<i+1; j++) //for loop to print stars
        printf("*");
    printf("\n");
    }
  i =0;
  j = 0;
  
  for(i=0 ; i <n  ; i++){
      for(j=n-1; j>i ; j--)
        printf("*");
    printf("\n");
    }
}
