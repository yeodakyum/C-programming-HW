#include <stdio.h>

int main(){
  int arr[5] = {1,2,3,4,5};
  int offset;
  offset = &arr[2] - &arr[0];
  printf("%d", offset);
}

