#include <stdio.h>

int main() 
{
    char *(a[7])={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"},day; 
 
    printf("Enter the week day:\n");
    scanf("%d",&day);
 
    if(day>7 || day<1)
    {
     printf("Invalid input");
    }
    else
    printf("%s",a[day-1]);

    return 0;
}

/*

Output :

Enter the week day:
5
Friday

*/