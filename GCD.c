#include<stdio.h>

int main()
{
    int a,b,i,g;

    printf("Enter any two numbers:\n");
    scanf("%d %d",&a,&b);

    for(i=1; i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
           g = i;
    }

    printf("GCD of %d and %d is %d",a,b,g);

    return 0;
}
/*
 Out
Enter any two numbers:
12
24
GCD of 12 and 24 is 12

*/