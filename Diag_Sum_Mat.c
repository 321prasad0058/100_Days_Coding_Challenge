/* Code to input a Square matrix
   of m rows and m columns and displaying
   the sum of the main diagonal elements
   from top left corner to right bottom corner.   
*/ 

#include <stdio.h>
 
int main()
{
    int sqmatrix[10][10];
    int i,j,m,sum=0;
     
    printf("The number of rows and columns is same in a Square Matrix:\n");

	printf("Enter number of Rows/Columns in Square Matrix[10 Maximum]:");
    scanf("%d",&m);
       
    printf("\nEnter %d matrix elements in %d x %d Matrix:\n",m*m,m,m);
    for(i=0;i< m;i++)
    {
        for(j=0;j< m;j++)
        {
            printf("Enter element in Matrix[%d,%d]: ",i,j);
            scanf("%d",&sqmatrix[i][j]);
        }
    }
 
    printf("\nYou have entered the Square Matrix  :\n");
    for(i=0;i< m;i++)
    {
        for(j=0;j< m;j++)
        {
            printf("%d\t",sqmatrix[i][j]);/*print an element and a tab space*/
			if(i==j)
			  sum = sum + sqmatrix[i][j];
        }
        printf("\n");   /*for new line after completion of one row*/
    }

     
    printf("The Sum of the elements of Main Diagonal\n of given Square Matrix is:%d",sum);
    
    return 0;   
}

/*

Output :

Enter number of Rows/Columns in Square Matrix[10 Maximum]:3 3

Enter 9 matrix elements in 3 x 3 Matrix:
Enter element in Matrix[0,0]: Enter element in Matrix[0,1]: 1 3 5 6 7 9 4 2 0
Enter element in Matrix[0,2]: Enter element in Matrix[1,0]: Enter element in Matrix[1,1]: Enter element in Matrix[1,2]: Enter element in Matrix[2,0]: Enter element in Matrix[2,1]: Enter element in Matrix[2,2]:
You have entered the Square Matrix  :
3       1       3
5       6       7
9       4       2
The Sum of the elements of Main diagonal
of given Square Matrix is:11

*/