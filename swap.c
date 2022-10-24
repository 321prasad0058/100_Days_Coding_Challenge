#include<stdio.h>

int main()
{
    double a,b,temp;

    // Taking Inputs
    printf("Enter the first number:\n");
    scanf("%lf",&a);

    printf("Enter the second number:\n");
    scanf("%lf",&b);

    // Value of 1st is assigned to temp
    temp=a;
    
    // Value of 2nd is assigned to first
    a=b;

    // Value of temp(Initial value of 1st) is assigned to 2nd
    b=temp;

    // Printing Output
    printf("\n After Swapping, 1st Number = %lf",a);
    printf("\n After Swapping, 2nd Number = %lf",b);

    return 0;
}

/* 

Output:

Enter the first number:
12
Enter the second number:
24
After Swapping, 1st Number = 24.000000
After Swapping, 2nd Number = 12.000000

*/
