#include <stdio.h>

int main() 
{
    int base, exp;
    long double result = 1.0;

    // Taking Inputs
    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exp);
    
    // Calculating Power of a number
    while (exp != 0)
    {
    result *= base;
    --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}

/*
Output :

Enter a base number: 2
Enter an exponent: 5
Answer = 32

*/



