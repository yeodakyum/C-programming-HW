#include <stdio.h>

int main(){
  int i,j;
  for(i=9; i>0; i--){
    if(i>=5){
      for(j=0; j<4; j++){
        if(j<i-5)
          printf("X");
        else
          printf("+");
      }
      printf("+");
      for(j=0 ; j<4; j++){
        if(j>8-i)
          printf("X");
        else
          printf("+");
      }
    }
    else if(i<5){
      for(j=0; j<4; j++){
        if(j<5-i)
          printf("X");
        else
          printf("+");
      }
      printf("+");
      for(j=0; j<4; j++){
        if(j>i-2)
          printf("X");
        else
          printf("+");
      }
      

      
    }
    
  printf("\n");
    
  }
  
}