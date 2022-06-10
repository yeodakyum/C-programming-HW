#include <stdio.h>

typedef struct{//declare struct 
  int m;
  int d;
  int y;
}date;

typedef struct {//declare struct
  char name[20];
  int no;
  date d;
} Man;


int main(){ 
  Man man; //init
  printf("Enter name: "); //input data
  scanf("%s", man.name);
  printf("Enter roll number: ");
  scanf("%d", &man.no);
  printf("Enter Date of Birth [DD MM YY] format: ");
  scanf("%d %d %d", &man.d.d, &man.d.m, &man.d.y);
  
  printf("Name: %s\n", man.name); //print result
  printf("RollNo: %d\n", man.no);
  printf("Date of birth: %d/%d/%d\n", man.d.d, man.d.m, man.d.y );
  
  return 0;
  
}