/* C program to check if two numbers are equal
   without using arithmetic operators or
   comparison operators
   */
#include<stdio.h>

int main()
{

 int x,y;

  printf("Enter the elements:\n");
  scanf("%d\n%d",&x,&y);
  
  // Checking for Eqaulity without using Arithmetic Operators
   if ( !(x ^ y) )
	 printf(" x is equal to y ");
  else
	printf(" x is not equal to y ");

return 0;
}

/*

Output :

Enter the elements:
12 
34
 x is not equal to y 
 
*/
