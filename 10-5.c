#include <stdio.h>
#include <stdlib.h>

typedef union{ //declare union
    char str[32];
    int a;
    int b;
} un;

typedef struct{ //declare struct
    char str[32];
    int a;
    int b;

} st;

int main(){
    printf("size of union = %ld bytes\n", sizeof(un)); //print result
    printf("size of struct = %ld bytes\n", sizeof(st));

  }
