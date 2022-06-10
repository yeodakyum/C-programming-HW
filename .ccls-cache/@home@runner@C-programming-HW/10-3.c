#include <stdio.h>


typedef struct { //declare struct
  char name[20];
  int q;
  float p;
  int a;
} Item;


int main(){
  Item item;
  printf("Enter product name: ");  //input data
  scanf("%s", item.name);
  printf("Enter price: ");
  scanf("%f", &item.p);
  printf("Enter quantity: ");
  scanf("%d", &item.q);
  
  printf("Name: %s\n", item.name); //print result
  printf("Price: %f\n", item.p);
  printf("Quantity: %d\n", item.q);
  printf("Total Amout: %f", item.p * item.q);
  return 0;
  
}