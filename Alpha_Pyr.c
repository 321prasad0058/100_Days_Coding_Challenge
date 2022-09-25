/*
A
B B
C C C
D D D D
E E E E E
F F F F F F 
G G G G G G G 
*/

#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
   
   // For entering the Upper_Case Character until which we want to print the Pyramid
   printf("Enter an UPPER_CASE Character you want to print in the last row: ");
   scanf("%c", &input);
   
   for (i = 1; i <= (input - 'A' + 1); ++i) 
   {
      for (j = 1; j <= i; ++j)
      {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}