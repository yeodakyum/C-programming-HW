#include <stdio.h>

typedef struct { //declare struct
  char name[20];
  int id;
  double salary;
} man;


int main(){
  man Henry = {"Henry", 1112, 95743}; //init

  printf("Name: %s\n", Henry.name);
  printf("Id: %d\n", Henry.id);
  printf("Salary: %f\n", Henry.salary);
  
  return 0;
  
}