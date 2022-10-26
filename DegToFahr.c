#include<stdio.h>

int main()
{
    float celsius,fahrenheit;

    printf("Enter the temperature in Degree Celsius:\n");
    scanf("%f",&celsius);
    
    // Conversion of degree to fahrenheit
    fahrenheit= (1.8*celsius) + 32;

    printf("Temperature in Degree Fahrenheit is %f",fahrenheit);

    return 0;
}

/*

Output:

Enter the temperature in Degree Celsius:
67
Temperature in Degree Fahrenheit is 152.600006

*/