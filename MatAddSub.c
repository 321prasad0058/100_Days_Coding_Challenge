#include<stdio.h>

int main()
{
    
    int n, m, c, d, first[10][10], second[10][10], sum[10][10], diff[10][10];

    // Taking Input for No. of Rows and Columns of the Matrix 
    printf("\nEnter the number of rows and columns of the first matrix \n\n");
    scanf("%d%d", &m, &n);

    // Taking Input of the 1st Matrix
    printf("\nEnter the %d elements of the first matrix \n\n", m*n);
    for(c = 0; c < m; c++)   // to iterate the rows
        for(d = 0; d < n; d++)   // to iterate the columns
            scanf("%d", &first[c][d]);

    // Taking Input of the 2nd Matrix
    printf("\nEnter the %d elements of the second matrix \n\n", m*n);
    for(c = 0; c < m; c++)   // to iterate the rows
        for(d = 0; d < n; d++)   // to iterate the columns
            scanf("%d", &second[c][d]);

    //Displaying the 1st matrix
    printf("\n\nThe first matrix is: \n\n");
    for(c = 0; c < m; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            printf("%d\t", first[c][d]);
        }
    printf("\n");
    }

    //Displaying the second matrix
    printf("\n\nThe second matrix is: \n\n");
    for(c = 0; c < m; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            printf("%d\t", second[c][d]);
        }
    printf("\n");
    }

    /* 
        finding the SUM of the two matrices 
        and storing in another matrix sum of the same size
    */
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    // printing the elements of the sum matrix
    printf("\n\nThe sum of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }

    /*
        finding the DIFFERENCE of the two matrices 
        and storing in another matrix difference of the same size
    */
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            diff[c][d] = first[c][d] - second[c][d];

    //Displaying the elements of the difference matrix
    printf("\n\nThe difference(subtraction) of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }

    return 0;
}

/*

Output :

Enter the number of rows and columns of the first matrix 

3 3

Enter the 9 elements of the first matrix

1 2 3 4 4 3 2 1 5

Enter the 9 elements of the second matrix

1 8 5 6 2 4 9 4 7


The first matrix is:

1       2       3
4       4       3
2       1       5


The second matrix is:

1       8       5
6       2       4
9       4       7


The sum of the two entered matrices is:

2       10      8
10      6       7
11      5       12


The difference(subtraction) of the two entered matrices is: 

0       -6      -2
-2      2       -1
-7      -3      -2


*/