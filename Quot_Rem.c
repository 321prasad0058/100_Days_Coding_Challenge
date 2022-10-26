// Code to compute Quotient and Remainder 

#include<stdio.h>

int main()
{
    int dividend,divisor,quot,rem;
    
    // Taking Input
    printf("Enter Dividend:\n");
    scanf("%d",&dividend);

    printf("Enter Divisor:\n");
    scanf("%d",&divisor);
    
    // Computes Quotient
    quot = dividend/divisor;
    
    // Computes Remainder
    rem= dividend % divisor;
    
    // Displaying Quotient and Remainder
    printf("Quotient : %d\n",quot);
    printf("Remainder : %d",rem);

    return 0;
}

/*

Output :

Enter Dividend:
19
Enter Divisor:
3
Quotient : 6
Remainder : 1

*/