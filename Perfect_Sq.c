#include<stdio.h>
int main()
{
    // variable declaration
    int i, number;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // loop to check number is perfect square or not
    for(i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
            printf("\n%d is a perfect square\n", number);

            return 0;   // same as using break in this case to end the program
        }
    }
    printf("\n%d is not a perfect square\n", number);
    
    return 0;
}

/*

Output :

Enter a number: 7
7 is not a perfect square

*/