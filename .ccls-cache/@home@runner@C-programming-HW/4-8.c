#include <stdio.h>

int main(){
  int a, b, c;//declare variable
  printf("Enter three angles of triangle:\n");
  scanf("%d %d %d", &a, &b, &c);//take input
  if ((a+b+c)==180) printf("Triangle is valid.");//print result
  else printf("triangle is not valid.");//print result
  return 0;//end program
}