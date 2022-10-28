/*
V(Cone) = pi*(r^2)*h   ;
          -----------
             3
*/

#include<stdio.h>

int main()
{
    float r,h,v;

    // Taking Input for Radius of the Cone
    printf("Enter Radius of the Cone:\n");
    scanf("%f",&r);

    // Taking Input for Height of the Cone
    printf("Enter Height of the Cone:\n");
    scanf("%f",&h);

    // Computing Volume of the Cone
     v= (3.14*(r*r)*h)/3;

    // Displaying Volume of the Cone
    printf("Volume of the cone with Radius %.2f and Height %.2f is %f",r,h,v);

    return 0;
}

/*

Output:

Enter Radius of the Cone:
7
Enter Height of the Cone:
3
Volume of the cone with Radius 7.00 and Height 3.00 is 153.860001

*/