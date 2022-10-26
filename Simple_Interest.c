#include<stdio.h>

void main()
{
   
    float p_amt, rate, SI;
    int time;

    printf("Enter the value of principal amount, rate and time\n\n\n");
    scanf("%f%f%d", &p_amt, &rate, &time);

    // considering rate is in percentage
    SI = (p_amt*rate*time)/100.0;

    // usually used to align text in form of columns in table
    printf("\n\n\t\t\tAmount = Rs.%7.3f\n ", p_amt);

    printf("\n\n\t\t\tRate = Rs.%7.3f\n ", rate);
    printf("\n\n\t\t\tTime= %d years \n", time);
    printf("\n\n\t\t\tSimple Interest = Rs.%7.3f\n ", SI);
   
    return 0;
}

/*

Output:

Enter the value of principal amount, rate and time


100
8
8
Amount = Rs.100.000
 

			Rate = Rs.  8.000
 

			Time= 8 years 


			Simple Interest = Rs. 64.000
			
*/