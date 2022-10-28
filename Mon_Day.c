#include <stdio.h>

int main() 
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},m; 
 
    printf("Enter the month:\n");
    scanf("%d",&m);

    if(m>12 || m<1)
    {
     printf("Invalid input");
    }
    else 
    if(m==2)
    {
    	printf("No. of days in month 2 is either 29 or 28");
    }
    else
    
    printf("No. of days in Month %d is %d",m,a[m-1]);
    
    return 0;

}

/*

Output:

Enter the month:
7
No. of days in Month 7 is 31

*/