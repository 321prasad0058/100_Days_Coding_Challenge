#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the 1st number:\n");
    scanf("%d",&a);
    
    printf("Enter the 2nd number:\n");
    scanf("%d",&b);

    printf("Numbers before Swapping are:\n a = %d\n b = %d\n ",a,b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("Numbers After Swapping are:\n a = %d\n b = %d ",a,b); 

   return 0;
}

/*

Output :

Enter the 1st number:
16
Enter the 2nd number:
76
Numbers before Swapping are:
 a = 16
 b = 76
 Numbers After Swapping are:
 a = 76
 b = 16
 
*/