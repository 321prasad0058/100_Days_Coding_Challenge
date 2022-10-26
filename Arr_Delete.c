#include<stdio.h>

int main()
{
    int array[100], position, c, n;
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\n\nEnter the location where you want to delete element from:  ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("\n\nDeletion not possible\n\n");
    else 
        // updating the locations with next elements
        for(c = position-1; c < n-1; c++)
        array[c] = array[c+1];

    printf("\n\nResultant array is: ");
    /* 
        the array size gets reduced by 1 
        after deletion of the element
    */
    for(c = 0; c < n-1; c++) 
        printf("%d  ", array[c]);
    return 0;
}

/*

Output:

Enter number of elements in array:7
Enter 7 elements
1 3 5 7 9 0 1
Enter the location where you want to delete element from:  7
Resultant array is: 1  3  5  7  9  0  

*/