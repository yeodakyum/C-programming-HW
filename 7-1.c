#include <stdlib.h>
#include <stdio.h>

int main(){
  int size;
  int* arr = NULL;
  printf("Enter size of array: ");
  scanf("%d", &size);
  arr = (int*)malloc(size*sizeof(int));
  
  printf("Enter %d elements in the array: ", size);
  for(int i=0; i< size; i++){
    scanf("%d", (arr+i));
  }
  printf("Elements in array are: ");
  for(int i=0; i<size;i++ ){
    printf("%d ", *(arr+i));
  }
  free(arr);
  return 0;
}
