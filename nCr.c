/*

Code to calculate nCr

Author : Prasad Anil Alai

*/

#include <stdio.h>
 
int fact(int num);
 
void main()
{
    int n, r, ncr_var;
 
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\nEnter the value of r:");
    scanf("%d", &r);
    /* ncr is also represented as C(n,r), the formula is:
     * C(n,r) = n! / ( r!(n - r)! ). For 0 <= r <= n.
     */
    ncr_var = fact(n) / (fact(r) * fact(n - r));
    printf("\nThe value of C(%d,%d) is: %d",n,r,ncr_var);
}
/* This function is used to find the 
 * factorial of given number num
 */
int fact(int num)
{
    int k = 1, i;
    // factorial of 0 is 1
    if (num == 0)
    {
        return(k);
    }
    else
    {
        for (i = 1; i <= num; i++)
    {
            k = k * i;
	}
    }
    return(k);
}

/*

Output:

Enter the value of n:
5 
Enter the value of r:
2
The value of C(6,2) is: 15

*/