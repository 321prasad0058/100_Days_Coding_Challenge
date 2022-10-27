#include<stdio.h>

void sorting(int *x, int y);

void main()
{
    int a[20], i, c, n;

    // Taking Input for Number of Elements
    printf("Enter number of elements you want to sort:\n ");
    scanf("%d\n", &n);

    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

    // Calling Sorting function
    sorting(a, n);
    
    // Printing the Sorted Array
    for(i = 0; i <n; i++)
    printf("%d\t", a[i]);
}

// Function to Sort array 
void sorting(int *x, int y)
{   
    // Using temp variable for Sorting 
    int i, j, temp;
    for(i = 1; i <= y-1; i++)
    {
        for(j = 0; j < y-i; j++)
        {
            if(*(x+j) > *(x+j+1))
            {
                temp = *(x+j);
                *(x+j) = *(x+j+1);
                *(x+j+1) = temp;
            }
        }
    }
}

/*

Output :

Enter number of elements you want to sort: 7
1 7 2 4 9 21 6
1	2	4	6	7	9	21	

*/