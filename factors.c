#include<stdio.h>

int main()
{
    int n;
    
    //Taking Input
    printf("Enter any positive integer:\n");
    scanf("%d",&n);
    
    // Printing the factors
    printf("Factors of %d are \n",n);

    for(int i=1;i<=n; ++i)
    {
        if(n%i==0)
         printf("%d\n",i);
    }
    return 0;
}

/*

Output :

Enter any positive integer:
90
Factors of 90 are 
1
2
3
5
6
9
10
15
18
30
45
90

*/
