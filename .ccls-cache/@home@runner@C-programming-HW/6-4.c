#include <stdio.h>

float expo(float a, int b){
  int tot =1;
  for(int i=0; i <b ;i++)
    tot *= a;
  return  tot;
}

int main(){
  float c;
  int d;
  printf("Enter base: ");
  scanf("%f", &c);
  printf("Enter exponent: ");
  scanf("%d", &d);
  printf("%.2f ^ %d = %f", c, d, expo(c, d));  
}