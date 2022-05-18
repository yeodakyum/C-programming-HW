#include <stdio.h>

int main(){
  int arr[5] = {1,2,3,4,5}; //declare array

  for(int i=0; i<5 ;i++) //for loop
    printf("%d value in the ith array : %d\n", i, *(arr+i)+2 ); //some pointer things
  
}


