#include <stdio.h>

int main(){
  int arr[2];

  scanf("%d %d", arr, arr+1);

  printf("Sum = %d" , *arr + *(arr+1));
}