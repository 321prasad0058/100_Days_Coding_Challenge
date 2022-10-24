#include <stdio.h>

int main() {

  // Taking Input Size
  int size = 5;

  // external loop to print spaces
  for (int i = 0; i < size; i++) 
  {   
   // internal loop to print pattern
     for (int j = 0; j < size; j++) 
      printf("*");
     
      printf("\n");
  }
  return 0;
}

/* Output : 

   *****
   *****
   *****
   *****
   *****
   
*/