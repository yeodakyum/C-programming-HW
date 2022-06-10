#include<stdio.h>
#define Max_size 100
int main(){
  int arr[Max_size][Max_size];//defining array as 2d
  int rows;
  printf("Enter number of rows:(max 100)");
  scanf("%d",&rows);//get input from user
  for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
      if(j==0||j==i){
        arr[i][j]=1;//arr[i][0]=1,arr[i][i]=1
      }
      else{
        arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        //arr[n][k]=arr[n-1][k-1]+arr[n-1][k]
    }
  }
  }

  for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
      printf("%d ",arr[i][j]);//printing out array elements in order to display.
    }
    printf("\n");//go to the next line
  }
}
