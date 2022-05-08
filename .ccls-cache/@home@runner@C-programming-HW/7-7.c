#include <stdlib.h>
#include <stdio.h>

int main(){
  int size, tmp, swap;
  int* arr = NULL;
  printf("Enter size of array: ");
  scanf("%d", &size);
  arr = (int*)malloc(size*sizeof(int));
  
  printf("Enter %d elements in the array: ", size);
  for(int i=0; i< size; i++){
    scanf("%d", (arr+i));
  }
  do{                                //bubble sort
    swap =0;
  for(int i=0; i<size-1;i++ ){
    if(*(arr+i) > *(arr+i+1)){
      swap = 1;
      tmp =arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = tmp;
    }
      }
    }
    while(swap ==1);
    for(int i=0; i<size;i++ ){
    printf("%d ", *(arr+i));
  }
  free(arr);
  return 0;
}
