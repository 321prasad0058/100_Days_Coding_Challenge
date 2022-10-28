#include<stdio.h>
int main()
{
    float l,b,h,v;

    // Taking Input for Length, Breadth and Height of the Cuboid respectively

    printf("Enter Length of the Cuboid:\n");
    scanf("%f",&l);

    printf("Enter Breadth of the Cuboid:\n");
    scanf("%f",&b);

     printf("Enter Height of the Cuboid:\n");
    scanf("%f",&h);

    // Computing Volume of the Cuboid
    v= l*b*h;

    // Printing Volume of the Cuboid
    printf("Volume of the Cuboid with Length %.2f, Breadth %.2f and Height %.2f is %.2f ",l,b,h,v);

    return 0;
}

/*

Output:

Enter Length of the Cuboid:
14
Enter Breadth of the Cuboid:
12
Enter Height of the Cuboid:
18
Volume of the Cuboid with Length 14.00, Breadth 12.00 and Height 18.00 is 3024.00 

*/