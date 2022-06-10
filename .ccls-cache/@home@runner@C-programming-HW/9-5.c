#include <stdlib.h>
#include <stdio.h>

int main(){
  int size;
  int* arr = NULL; //declare pointer
  int tot = 0;
  printf("Enter size of array: ");
  scanf("%d", &size);//take size of arr
  arr = (int*)malloc(size*sizeof(int));//allocate memory
  
  printf("Enter %d elements: ", size); //enter entered amount of elements 
  for(int i=0; i< size; i++){
    printf("Enter element  %d: ", i+1);
    scanf("%d", (arr+i));
  }
  printf("Array elements are: "); //printf array
  for(int i=0; i< size; i++){
    printf("%d  ", *(arr+i));
  }
  printf("\nSum of all elements:"); //print sum
  for(int i=0; i<size;i++ ){
    tot += *(arr+i);
  }
  printf("%d", tot);
  free(arr); //free mem
  return 0;
}
