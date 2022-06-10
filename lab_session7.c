#include <stdio.h>

typedef struct{
  int numerator;
  int denominator;
}FRACTION;


int main(){
FRACTION f1;
FRACTION f2;
printf("Key first fraction in ther form of x/y:");
scanf("%d/%d", &f1.numerator, &f1.denominator);
printf("Key second fraction in ther form of x/y:");
scanf("%d/%d", &f2.numerator, &f2.denominator);

printf("The result of %d/%d * %d/%d is %d/%d",f1.numerator,f1.denominator,f2.numerator, f2.denominator, f1.numerator * f2.numerator, f1.denominator * f2.denominator);

  
}