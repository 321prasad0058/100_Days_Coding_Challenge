#include <stdio.h>

int main() {
   int low, high, i, flag;
   printf("Enter two numbers(intervals):\n ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are:\n ", low, high);

   // iteration until low is not equal to high
   while (low < high) {
      flag = 0;

      // ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      // if low is a non-prime number, flag will be 1
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d\t", low);

      // to check prime for the next number
      // increase low by 1
      ++low;
   }

   return 0;
}

/*

Output:

Enter two numbers(intervals):
 1 67
 Prime numbers between 1 and 67 are:
 2	3	5	7	11	13	17	19	23	29	31	37	41	43	47	53	59	61	
 
*/