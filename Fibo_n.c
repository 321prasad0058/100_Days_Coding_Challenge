#include<stdio.h>

 int main()
{
   int a,b,c,i,n;

   // Taking n input
   printf("Enter the number of terms");
   scanf("%d",&n);

   // Assigning values to the first terms of the series
   a=0;
   b=1;
   c=0;

   printf("Fibonacii Series :");
  // Printing the series
   for(i=0;i<=n;i++)
   {
    printf("%d",c);

    a=b;
    b=c;
    c=a+b;
   }
   return 0;
}