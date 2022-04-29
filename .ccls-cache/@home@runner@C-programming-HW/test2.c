#include <stdio.h>

int F(int num);
int sum(int num);
int main(){

  int n, k;
  scanf("%d", &n);

  k = sum(n);

  printf("%d", k);

    return 0;
}

int F(int num){
  int n = num;
  if(n==0)
    return 0;
  if(n==1)
    return 1;
  if(n==2)
    return 2;
  return (F(n-3) + F(n-2) + F(n-1) );
}

int sum(int num){
  int i,j, n= num, tot=0;
  for(i=0; i <= n;i++ ){
    for(j=0; j<=i;j++)
      tot += F(j);
  }
  return tot;
  }
