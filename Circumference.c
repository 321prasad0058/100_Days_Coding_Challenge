#include<stdio.h>

int main()
{
   
    int r;
    float pi = 3.142, area, c;
    
    printf("\nEnter the radius of the circle:\n");
    scanf("%d", &r);
    
    // Calculating Area of the Circle
    area = pi*r*r;
    printf("\n Area of the circle is: %f ", area);
    
    // Calculating Circumference of the Cirle
    c = 2*pi*r;
    printf("\nCircumference of the circle is: %f", c);

    return 0;
}

/*

Output:

Enter the radius of the circle:
6
Area of the circle is: 113.112000 
Circumference of the circle is: 37.703999

*/