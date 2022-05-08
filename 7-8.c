#include <stdlib.h>
#include <stdio.h>

int main(){
  int size;
  int* arr = NULL;
  int tot = 0;
  printf("Enter size of array: ");
  scanf("%d", &size);
  arr = (int*)malloc(size*sizeof(int));
  
  printf("Enter %d elements in the array: ", size);
  for(int i=0; i< size; i++){
    printf("element - %d : ", i);
    scanf("%d", (arr+i));
  }
  printf("Sum of all elements of array = ");
  for(int i=0; i<size;i++ ){
    tot += *(arr+i);
  }
  printf("%d", tot);
  free(arr);
  return 0;
}
