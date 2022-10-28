#include <stdio.h>
#include <conio.h>
  
int main()
{
    int a[10000],i,n,j,k,temp;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("how many times left rotate : ");
    scanf("%d", &k);
     
    for(i=0; i<k; i++)
    {
        temp=a[0];
        for(j=0; j<n-1; j++)
        {
           a[j]=a[j+1];
		}

         a[n-1]=temp;
    }
    printf("\nArray elements after left rotate  : ");

    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    
    return 0;
 }

 /*
 
 Output :

 Enter size of the  array : 6
Enter elements in array : 1 4 7 3 9 2
how many times left rotate : 5 

array elements after left rotate  : 2 1 4 7 3 9

 */