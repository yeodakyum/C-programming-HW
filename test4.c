#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}
int main() {
   int limit;

   printf("Enter limit of the text: ");
   scanf("%d", &limit);
   char* arr = (char*)malloc(sizeof(char) * limit);
   printf("Enter text: ");
   clean_stdin();
    gets(arr);
   printf("Inputted text is: %s", arr);
}