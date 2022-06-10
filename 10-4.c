#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union  //declare union
{
    char str[100];
} String;

int main()
{
    /// @initialize String pointer
    String *s = (String *)malloc(sizeof(String)); //pointer
    strcpy(s->str, "Henry Wong"); //string copy

    printf("\n\n\n  Pointer : Show a pointer to union : ");
    printf("\n  %s %s\n\n", s->str, (*s).str); //print result
  }
