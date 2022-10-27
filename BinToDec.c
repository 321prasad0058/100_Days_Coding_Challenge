#include<stdio.h>
#include<math.h>

int bin_dec(int n);

int main()
{
  int n;

  printf("Enter the Binary Number :\n");
  scanf("%d",&n);

  printf("The Decimal Equivalent of %d is %d\n",n,bin_dec(n));

  return 0;
}

int bin_dec(int n)
{
    int dec=0,i=0,rem;
    
    while(n!=0)
    {
      rem =n%10; // Gives the digit at Units place
      n = n/10;  // Gives the number excluding it's units place

      dec+= rem*pow(2,i++);
    }
    // Returns the Decimal Equivalent of the input Binary Number

    return dec;
}

/*

Output :

Enter the Binary Number :
1110
The Decimal Equivalent of 1110 is 14

*/

