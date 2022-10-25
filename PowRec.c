#include<stdio.h>
int power(int n1, int n2);

int main()
{
    int base,exp,result;

    printf("Enter the base Number:\n");
    scanf("%d",&base);

    printf("Enter the exponent:\n");
    scanf("%d",&exp);

    result=power(base,exp);

    printf("%d^%d=%d",base,exp,result);

    return 0;
}

int power(int base, int exp)
{
    if(exp!=0)
     return( base * pow(base,exp-1) );
    else 
     return 1; 
}

/*

Output :

Enter the base Number:
5
Enter the exponent:
7
5^7=78125

*/