#include <stdlib.h>
#include <stdio.h>

int main(){
  int size;
  int* arr = NULL; //declare pointer
  printf("Enter size of array: ");
  scanf("%d", &size); //take size of arr
  arr = (int*)malloc(size*sizeof(int)); //allocate memory
  
  printf("Enter %d elements in the array: ", size);
  for(int i=0; i< size; i++){ //input
    scanf("%d", (arr+i));
  }
  printf("Elements in array are: ");
  for(int i=0; i<size;i++ ){ //output
    printf("%d ", *(arr+i));
  }
  free(arr);
  return 0;
}
