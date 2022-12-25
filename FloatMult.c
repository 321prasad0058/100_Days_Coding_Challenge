/*
Code to multiply two Floating Point Numbers

Author : Prasad Anil Alai

*/

#include <stdio.h>
int main(){
   float num1, num2, product;
   printf("Enter first Number: ");
   scanf("%f", &num1);
   printf("Enter second Number: ");
   scanf("%f", &num2);

   //Multiply num1 and num2
   product = num1 * num2;

   // Displaying result up to 3 decimal places. 
   printf("Product of entered numbers is:%.3f", product);
   return 0;
}

/*

Output:

Enter first Number: 12.761
Enter second Number: 89.23
Product of entered numbers is: 1138.664

*/