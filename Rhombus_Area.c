/* A(Rhombus) =  d1 * d2
                ---------   ;
                    2

    */                
#include<stdio.h>
float area(float d1,float d2)
{
	return (d1*d2)/2;
}

int main()
{
	
	float d1,d2,a;

    // Taking Input	
	printf("Enter Diagonal1's Length of rhombus: ");
	scanf("%f",&d1);
	
	printf("enter Diagonal2's Length of rhombus: ");
	scanf("%f",&d2);

    // Computing Area of the Rhombus
	a=area(d1,d2);
    
	printf("Area of Rhombus with Diagonal Lengths %.2f and %.2f is : %.2f\n",d1,d2,a);

	return 0;
}

/*

Output :

Enter Diagonal1's Length of rhombus: 6
enter Diagonal2's Length of rhombus: 8
Area of Rhombus with Diagonal Lengths 6.00 and 8.00 is : 24.00

*/