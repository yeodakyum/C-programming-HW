#include <stdio.h>
int fib(int term, int val, int prev){
  if(term == 0) return prev;
 return fib(term - 1, val+prev, val);  
}

int main(){
  
  int k = fib(29, 1, 0);
  printf("%d\n", k);
}