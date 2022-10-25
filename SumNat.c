#include<stdio.h>

int addNos(int n);

int main()
{
 int num;
 
 printf("Enter any positive Integer:\n");
 scanf("%d",&num);
 
 printf("Sum = %d",addNos(num));
 
 return 0;
}

int addNos(int n)
{
 if(n!=0)
   return n + addNos(n-1);
  else 
   return n; 
}

/*

Output:

Enter any positive Integer:
100
Sum = 5050

*/