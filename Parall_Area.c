#include<stdio.h>
int main()
{
    float b,h,a;
    
    // Taking Input for Base and Height of the Parallelogram respectively

    printf("Enter the Base of the Parallelogram:\n");
    scanf("%f",&b);

    printf("Enter the Height of the Parallelogram:\n");
    scanf("%f",&h);

    // Computing Area of the Parallelogram
    a = (b*h);

    // Displaying the Area of the Parallelogram 
    printf("Area of the Parallelogram with Base %.2f and Height %.2f is %f ",b,h,a);

    return 0;
}

/*

Output:

Enter the Base of the Parallelogram:
16
Enter the Height of the Parallelogram:
90
Area of the Parallelogram with Base 16.00 and Height 90.00 is 1440.000000

*/
