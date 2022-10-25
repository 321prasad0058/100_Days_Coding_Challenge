#include<stdio.h>
int main()
{
    int n,i;
    float num[100],sum=0.0,avg;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    while(n > 100 || n < 1)
    {
        printf("Error! Number should be in the range of 1 to 100\n");
        printf("Enter the number again");
        scanf("%d",&n);
    }

    for(i=0;i<n;++i)
    {
        printf("%d. Enter Number:",i+1);
        scanf("%f",&num[i]);
        sum+=num[i];
    }

    avg=sum/n;
    printf("Average = %.2f",avg);
    return 0;
}  

/*

Output:

Enter the number of elements:
5
1. Enter Number:2
2. Enter Number:3
3. Enter Number:4
4. Enter Number:5
5. Enter Number:6
Average = 4.00

*/