#include <stdio.h>

int fac(int a){
  if(a==1)
    return 1;
  return fac(a-1) * a;
}

int main(){
  int num;
  
  printf("Enter number: ");
  scanf("%d", &num);

  printf("%d", fac(num));
  
}