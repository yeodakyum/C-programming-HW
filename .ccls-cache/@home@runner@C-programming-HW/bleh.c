#include <stdio.h>

void swap(int*x, int* y){
  int tmp = *x;
  *x = *y;
  *y = tmp;
  return;
}

void sort(int* ptr, int size){
  int i, j, min;
  for(i=0; i<size-1; i++ ){
    min = i;
      for(j=i+1; j<size; j++){
        if(ptr[j-1] > ptr[j]){
          min = j;
        }
      
    }
    if(min!=i)
     // printf("%d %d \n", ptr[i], ptr[j]);
      swap(ptr+i, ptr+min);
      //printf("%d %d \n", ptr[i], ptr[j]);
    for(int k=0; k<size; k++){
      if(k==i || k==min)
        printf("[%2d] ", ptr[k]);
      else
        printf("%2d ", ptr[k]);
    }
    printf("\n");
  }
}
int main(){
  int arr[6] = {23, 78, 45, 2, 30, 56};
  for(int i=0; i<6; i++)
    printf("%2d ", arr[i]);
  printf("\n");
  sort(arr, 6);
  
}
  
