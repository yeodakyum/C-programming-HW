#include <stdio.h>

void star(int a, int* b, int *c, int*d){
  *b = a/(60*60);
  *c = (a-(*b*60*60))/60;
  *d = (a-(*b*60*60)-(*c*60));
  return;
}

int main(){
  int a=10, b=20;
  void(*fucptr)(int, int*, int*x, int*d) = star;
  
  const int* ptr = &a;
  int arr[][4] = { {1,2,3}, {1,2,3},{1,2,3}, {1,2,3}};
  
  
}