#include<stdio.h>

int main()
{
	float side,peri;

    // Taking Input 
	printf("Enter the side of the Rhombus:\n");
	scanf("%f",&side);
	
    // Computing Perimeter of the Rhombus
	peri=4*side;

	printf("Perimiter of the Rhombus is : %f\n",peri);

	return 0;
}

/*

Output:

Enter the side of the Rhombus:
6
Perimiter of the Rhombus is : 24.000000

*/
