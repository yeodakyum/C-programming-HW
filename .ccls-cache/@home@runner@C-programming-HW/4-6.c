#include <stdio.h>

int main(){
  int a,b,c,d,e;//declare variable
  
  printf("Enter five subjects marks:");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);//take input
  float percent = (a+b+c+d+e) / 5.0;
  printf("Percentage = %0.2f\n", percent);
  if(percent >=90) printf("Grade A");
  else if (percent >=80) printf("Grade B");//print result
  else if (percent >=70) printf("Grade C");
  else if (percent >=60) printf("Grade D");
  else if (percent >=50) printf("Grade E");
  else  printf("Grade F");
  
  return 0;//end program
}