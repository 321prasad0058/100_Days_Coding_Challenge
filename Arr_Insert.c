#include<stdio.h>

int main()
{
    int arr[100], pos, c, n, value;

    printf("\nEnter number of elements in array:\n");
    scanf("%d", &n);

    printf("\nEnter %d elements\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &arr[c]);

    printf("\n\nEnter the location where you want to insert new element:  ");
    scanf("%d", &pos);

    printf("\n\nEnter the value to insert: ");
    scanf("%d", &value);

    // shifting the elements from (position to n) to right
    for(c = n-1; c >= pos-1; c--)
        arr[c+1] = arr[c];

    arr[pos - 1] = value;    // inserting the given value

    printf("\nResultant array is: ");
    /* 
        the array size gets increased by 1 
        after insertion of the element
    */
    for(c = 0; c <= n; c++) 
        printf("%d  ", arr[c]);

    return 0;
}

/*

Output :

Enter number of elements in array:
5
Enter 5 elements
1 3 4 5 6 
Enter the location where you want to insert new element:  4
Enter the value to insert: 67
Resultant array is: 1  3  4  67  5  6  

*/