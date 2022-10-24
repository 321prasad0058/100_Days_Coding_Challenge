#include<stdio.h>

int main()
{
    int n,i;
    
    // Taking Input
    printf("Enter the number :\n");
    scanf("%d",&n);

    // Printing the number's table
   for(i=1;i<=10;i++)
    printf("%d X %d = %d\n",n,i,n*i);
   
   return 0;  
}


/* 

 Output :

Enter the number :
2
2 X 1 = 2
2 X 2 = 4
2 X 3 = 6
2 X 4 = 8
2 X 5 = 10
2 X 6 = 12
2 X 7 = 14
2 X 8 = 16
2 X 9 = 18
2 X 10 = 20

*/