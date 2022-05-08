#include <stdlib.h>
#include <stdio.h>

int main(){
  int size;
  int* arr = NULL;
  int num, n;
  printf("Enter size of array: ");
  scanf("%d", &size);
  arr = (int*)malloc(size*sizeof(int));
  
  printf("Enter %d elements in the array: ", size);
  for(int i=0; i< size; i++){
    scanf("%d", (arr+i));
  }
  printf("Enter element to insert:");
  scanf("%d", &num);
  printf("Enter the element position:");
  scanf("%d", &n);  
  size++;
  n--;
  arr = (int*)realloc(arr, (size)*sizeof(int));
  for(int i=size; i>n ; i--){
    *(arr+i) = *(arr+i-1);
  }
  *(arr+n) = num;
  printf("Elements in array are: ");
  for(int i=0; i<size;i++ ){
    printf("%d ", *(arr+i));
  }
  free(arr);
  return 0;
}
