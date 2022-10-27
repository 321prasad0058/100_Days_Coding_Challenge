#include<stdio.h>
int main()
{
    int a[2][2],i,j;
    long det;

    printf("Enter the elements of the array:\n");

    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
      scanf("%d",&a[i][j]);
    }
    printf("The Entered Matrix is:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
          printf("%d\t",a[i][j]);

       printf("\n");   
    } 

    // Finding Determinant for a 2X2 Matrix
    det = (a[0][0]*a[1][1]) - (a[1][0]*a[0][1]); 

   printf("Determinant : %d",det);

   return 0;
}

/*

Output :

Enter the elements of the array:
8   
1
2
6
The Entered Matrix is:
8       1
2       6
Determinant : 46

*/