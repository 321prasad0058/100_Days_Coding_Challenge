#include<stdio.h>

int main()
{
    int n1,n2,max;

    printf("Enter any 2 positive integers:\n");
    scanf("%d %d",&n1,&n2);

    max= n1>n2 ? n1 : n2;

    while(1)
    {
        if(max%n1==0 && max%n2==0)
        {
            printf("LCM of %d and %d is %d",n1,n2,max);
            break;
        }
    }
    return 0;
}

/*

Output:

Enter any 2 positive integers:
24
6
LCM of 24 and 6 is 24

*/