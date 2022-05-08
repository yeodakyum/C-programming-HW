#include <stdlib.h>
#include <stdio.h>

int main(){
  int size;
  int* arr = NULL;
  int even=0, odd=0;
  printf("Enter size of array: ");
  scanf("%d", &size);
  arr = (int*)malloc(size*sizeof(int));
  
  printf("Enter %d elements in the array: ", size);
  for(int i=0; i< size; i++){
    scanf("%d", (arr+i));
  }
  for(int i=0; i<size;i++ ){
    if (*(arr+i) %2)
      odd ++;
    else
      even ++;
  }

  printf("Total even elements: %d\n", even);
  printf("Total odd elements: %d", odd);
  free(arr);
  return 0;
}
