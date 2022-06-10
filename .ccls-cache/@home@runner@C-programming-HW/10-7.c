#include <stdio.h>
#include <stdlib.h>

typedef struct{ //declare struct
    int id;
    float gpa;
}STUDENT;

typedef union{ //declare union
  STUDENT all;
}U_STUDENT;

int main(){
U_STUDENT *stu1 = (U_STUDENT*)malloc(sizeof(U_STUDENT)); //pointer
U_STUDENT *stu2 = (U_STUDENT*)malloc(sizeof(U_STUDENT));

  stu1->all.id = 1;
  stu1->all.gpa = 2.9;
  stu2->all.id = 2;
  stu2->all.gpa = 3.7;
  
  printf("Student1: ID = %d\n", stu1->all.id); //print result
  printf("Student1: GPA = %f\n", stu1->all.gpa);
  printf("Student2: ID = %d\n", stu2->all.id);
  printf("Student1: GPA = %f\n", stu2->all.gpa);
  
}