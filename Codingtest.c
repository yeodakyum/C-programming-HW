#include <stdio.h>
#define min(a,b)  (((a) < (b)) ? (a) : (b))
 #define max(a,b)  (((a) > (b)) ? (a) : (b))


int main(){
  int input = 6;
  char a;
  int i, j, k;
  int arr[5];
  int num ;

    ASK:
    printf("***************\n");
    printf("1. Diamond\n");
    printf("2. Odd number\n");
    printf("3. Factorial\n");
    printf("4. average\n");
    printf("5. exit\n");
    printf("***************\n\n\n");
    printf("Select menu:");
    scanf("%d", &input);

    switch (input){ 
      case 5:
        return 0;      
      case 1:
        goto DIAMOND;
      case 2:
        goto ODD;
      case 3:
        goto FAC;
      case 4:
        goto AVG;

      default:
        goto ERROR;

      }
ERROR:
  printf("You entered wrong number!\n");
EXIT:
  printf("Do you want to return to main menu?(y/n) ");
  scanf(" %c", &a);
  if(a=='y')
    goto ASK;
  else
    return 0;

DIAMOND:
  printf("Enter an number: ");
  scanf("%d", &num);
    for(i=0; i <num; i++){
      for(j=0; j<num; j++){
        if(j<num-i-1)
          printf(" ");
        else
          printf("*");
        }
      for(k=0; k<num; k++){
        if(k<i)
          printf("*");
        else
          printf(" ");
        }
      printf("\n");
    }
  for(i=num; i>0; i--){
      for(k=0; k<num; k++){
        if(k>num-i)
          printf("*");
        else
          printf(" ");
        }
      for(j=0; j<num; j++){
        if(j<i-2)
          printf("*");
        else
          printf(" ");
      }
  printf("\n");
  }
  goto EXIT;

ODD:
  printf("Enter 1st number:");
  scanf("%d", &i);
  printf("Enter 2nd number:");
  scanf("%d", &j);
  if(i<0 || j<0){
    printf("%d is out of range",min(i, j));
    goto EXIT;
  }
  for(num = min(i, j); num <= max(i, j) ;num +=2){
    if(!(num%2))
      num ++;
    printf("%d ", num);
  }
  goto EXIT;

FAC:
  printf("Enter a number: ");
  scanf("%d", &num);
  j=1;
  for(i=1; i<=num; i++){
    j *= i;
  }
  printf("Factorial of %d is %d \n", num, j);
  goto EXIT;

AVG:
  for(i=1; i<=5; i++){
    printf("Enter a number %d :",i);
    scanf("%d", &arr[i-1]);
  }
  printf("Entered numbers are %d, %d, %d, %d, %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
  printf("The average of the numbers are : %0.2f\n",(arr[0] +arr[1]+arr[2]+arr[3]+arr[4]) / 5.0);
  goto EXIT;
}


