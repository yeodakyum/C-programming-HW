#include <stdio.h>

int main(){
  int i, j=0;//declare variable
  printf("Enter any number : "); //ask for input
  scanf("%d", &i);
do{
  j++;
  i = i/10; 
}
while(i);
printf("Total digits: %d", j);
}