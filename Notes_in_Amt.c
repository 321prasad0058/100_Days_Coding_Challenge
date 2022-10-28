#include<stdio.h>

int main()
{
    int a[8]={500,100,50,10,2,1},amt,temp,i;
    
    // Taking Input
    printf("Enter the amount:\n");
    scanf("%d",&amt);
    
    // Storing the amount in temp for computing further 
    temp = amt;
    
    // Calculating the Number of Notes 
    for(i=0;i<8;i++)
    {
        printf(" Rs %d Notes are %d\n",a[i],temp/a[i]);
        temp = temp%a[i];
    }

    return 0;
}

/*

Output :

Enter the amount:
55479  
 Rs 500 Notes are 110
 Rs 100 Notes are 4
 Rs 50 Notes are 1
 Rs 10 Notes are 2
 Rs 2 Notes are 4
 Rs 1 Notes are 1

*/