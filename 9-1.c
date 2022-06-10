#include <stdlib.h>
#include <stdio.h>

int main(){
  int size, a;
  double* arr = NULL; //declare pointer
  double largest = 0;

  printf("Enter number of elements: ");
  scanf("%d", &size); //take size of arr
  arr = (double*)malloc(size*sizeof(double)); //allocate memory
  
  for(int i=0; i< size; i++){ //input
    printf("Enter number %d: ", i+1);
    scanf("%lf", (arr+i));
  }

  
  for(int i=0; i<size;i++ ){ //output
    if(*(arr+i) > largest)
      largest = *(arr+i);
  }
  printf("largest number = %.2lf", largest);
  free(arr);
  return 0;
}
