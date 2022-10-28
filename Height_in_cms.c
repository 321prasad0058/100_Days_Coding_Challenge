/*
 Code to convert person's height 
 from inches to centimeters
 Formula = 2.54 * height
*/

#include<stdio.h>

int main()
{
   float i, c;

   printf("Enter Person Height in inches:\n");
   scanf("%f", &i);
   
   c = i * 2.54;
   printf("Height of Person in Centimeters =%.2f", c);
   return 0;
}

/*

Output :

Enter Person Height in inches:
6
Height of Person in Centimeters =15.24

*/