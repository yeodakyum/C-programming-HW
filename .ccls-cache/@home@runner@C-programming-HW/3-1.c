#include <stdio.h>

int main(){
  int a; //declare variables 
  long b;
  long long c;
  double d;
  long double e;
  // print using sizeof() 
  printf("The size of int = %ld bytes\n", sizeof(a));
  printf("The size of long = %ld bytes\n", sizeof(b));
  printf("The size of long long = %ld bytes\n", sizeof(c));
  printf("The size of double = %ld bytes\n", sizeof(d));
  printf("The size of long double = %ld bytes\n", sizeof(e));
  
}