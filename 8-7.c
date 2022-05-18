#include <stdlib.h>
#include <stdio.h>

int main(){
  int size, a;
  int* arr = NULL; //declare pointer
  printf("Enter size of array: ");
  scanf("%d", &size); //take size of arr
  arr = (int*)malloc(size*sizeof(int)); //allocate memory
  
  printf("Enter %d elements in the array: ", size);
  for(int i=0; i< size; i++){ //input
    scanf("%d", (arr+i));
  }

  printf("Emter element to search: ");
  scanf("%d", &a);
  
  for(int i=0; i<size;i++ ){ //output
    if(*(arr+i) == a)
      printf("%d is found at %d position",a, i+1);
    
  }
  free(arr);
  return 0;
}
