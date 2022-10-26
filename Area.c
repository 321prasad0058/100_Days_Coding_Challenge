// Code to find area of a triangle

#include<stdio.h>

int main()
{
    int b,h;
    float area;

    // Taking Input
    printf("Enter the base of the right angled triangle:\n");
    scanf("%d",&b);

    printf("Enter the height of the right angled triangle:\n");
    scanf("%d",&h);

    // Computing Area of the triangle
    // Typecasting the denominator from int to float
    area = (h*b)/(float)2;

    printf("Area of the triangle with base %d and height %d is %f",b,h,area);

    return 0;   
}

/*

Output:

Enter the base of the right angled triangle:
6
Enter the height of the right angled triangle:
8
Area of the triangle with base 6 and height 8 is 24.000000

*/