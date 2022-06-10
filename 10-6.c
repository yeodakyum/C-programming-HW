#include <stdio.h>
#include <stdlib.h>

typedef struct{  //declare struct
    int id;
    float gpa;
}STUDENT;
int main(){
STUDENT *stu1 = (STUDENT*)malloc(sizeof(STUDENT));//pointer
STUDENT *stu2 = (STUDENT*)malloc(sizeof(STUDENT));

  stu1->id = 1;
  stu1->gpa = 2.9;
  stu2->id = 2;
  stu2->gpa = 3.7;
  
  printf("Student1: ID = %d\n", stu1->id); //print result
  printf("Student1: GPA = %f\n", stu1->gpa);
  printf("Student2: ID = %d\n", stu2->id);
  printf("Student1: GPA = %f\n", stu2->gpa);
  
}