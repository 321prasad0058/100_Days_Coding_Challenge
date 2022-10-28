#include<stdio.h>

int main()
{
    int n, m, c, d, p, q, k, first[10][10], second[10][10], pro[10][10],sum = 0;
    
    // Taking Input for the number of rows and columns for the 1st Matrix
    printf("\nEnter the number of rows and columns of the first matrix: \n\n");
    scanf("%d%d", &m, &n);

    // 1st Matrix Input
    printf("\nEnter the %d elements of the first matrix: \n\n", m*n);
    for(c = 0; c < m; c++)   // to iterate the rows
        for(d = 0; d < n; d++)   // to iterate the columns
            scanf("%d", &first[c][d]);
    
    // Taking Input for No. of Rows and Columns for 2nd Matrix 
    printf("\nEnter the number of rows and columns of the 2nd matrix: \n\n");
    scanf("%d%d", &p, &q);
    
    // Checking for no. of columns of M1 = no. of rows of M2
    if(n != p)
        printf("Matrices with the given order cannot be multiplied with each other.\n\n");

    else    // matrices can be multiplied
    {
        printf("\nEnter the %d elements of the second matrix: \n\n",m*n);

        for(c = 0; c < p; c++)   // to iterate the rows
            for(d = 0; d < q; d++)   // to iterate the columns
                scanf("%d", &second[c][d]);

        // printing the first matrix
        printf("\n\nThe first matrix is: \n\n");
        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < n; d++)   // to iterate the columns
            {
                printf("%d\t", first[c][d]);
            }
            printf("\n");
        }

        // printing the second matrix
        printf("\n\nThe second matrix is: \n\n");
        for(c = 0; c < p; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                printf("%d\t", second[c][d]);
            }
            printf("\n");
        }

        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                for(k = 0; k < p; k++)
                {
                    sum = sum + first[c][k]*second[k][d];
                }
            pro[c][d] = sum;    // resultant element of pro after multiplication
            sum = 0;    // to find the next element from scratch
            }
        }

        // printing the elements of the product matrix
        printf("\n\nThe multiplication of the two entered matrices is: \n\n");
        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                printf("%d\t", pro[c][d]);
            }
            printf("\n"); // to take the control to the next row
        }
    }
    return 0;
}

/*

Output :

Enter the number of rows and columns of the first matrix: 

3 3

Enter the 9 elements of the first matrix:

1 2 3 4 5 6 7 8 9

Enter the number of rows and columns of the 2nd matrix:

3 3 

Enter the 9 elements of the second matrix:

9 8 7 6 5 4 3 2 1


The first matrix is:

1       2       3
4       5       6
7       8       9


The second matrix is:

9       8       7
6       5       4
3       2       1


The multiplication of the two entered matrices is:

30      24      18
84      69      54
138     114     90

*/
