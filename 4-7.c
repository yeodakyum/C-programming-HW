#include <stdio.h>

int main(){
  int a,b,c,d,e;//declare variable
  int grade;
  printf("Enter five subjects marks:");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);//take input
  float percent = (a+b+c+d+e) / 5.0;//declare variable
  printf("Percentage = %0.2f\n", percent);
  grade = percent / 10;
  switch(grade){
    case 10: case 9: 
      printf("Grade A"); break;//print result
    case 8:
      printf("Grade B"); break;    
    case 7:
      printf("Grade C"); break;
    case 6:
      printf("Grade D"); break;
    case 5:
      printf("Grade E"); break;
    case 4:
      printf("Grade F"); break;
  }
  return 0;//end program
}