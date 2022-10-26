#include<stdio.h>

int main()
{
    int n,i,flag = 0;

    printf("Enter the number to be checked:\n");
    scanf("%d",&n);

    // 0 and 1 are not Prime Numbers
    // Changing flag to 1 for non-prime numbers
    if(n==0 || n==1)
       flag =1;
    
    // if n is divisible by i, then n is not prime
    // Changing flag to 1 for non-prime numbers
    for(i=2; i <= n / 2 ;++i)   
    {
        if(n%i==0)
        { 
          flag = 1;
         break;
        }
    }
    
    // Flag is 0 for Prime Numbers
    if(flag == 0)
       printf("%d is a Prime Number\n ",n);
     else
       printf("%d is not a Prime Number\n ",n);

    return 0;          
}

/*

Output :

Enter the number to be checked:
15
15 is not a Prime Number

*/