// Sparse Matrix is a matrix in which the number of Non_Zero Elements > Zero Elements

#include<stdio.h>

int main()
{
    int n, m, c, d, matrix[10][10];
    int count = 0;
 
    printf("\nEnter the number of rows and columns of the matrix \n\n");
    scanf("%d%d",&m,&n);

    printf("\nEnter the %d elements of the matrix \n\n", m*n);
    for(c = 0; c < m; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            scanf("%d", &matrix[c][d]);
            if(matrix[c][d] == 0)
            count++;  // same as count=count +1
        }
    }

    // printing the matrix
    printf("\n\nThe entered matrix is: \n\n");
    for(c = 0; c < m; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            printf("%d\t", matrix[c][d]);
        }
    printf("\n"); // to take the control to the next row
    }

    // checking if the matrix is Sparse or not
    if(count > (m*n)/2)
        printf("\n\nThe entered matrix is a Sparse Matrix\n\n");
    else
        printf("\n\nThe entered matrix is not a Sparse Matrix\n\n");

    return 0;
}

/*

Output :

Enter the number of rows and columns of the matrix 

3 3

Enter the 9 elements of the matrix

1 0 2 0 3 5 0 0 1


The entered matrix is:

1       0       2
0       3       5
0       0       1


The entered matrix is not a Sparse Matrix

*/