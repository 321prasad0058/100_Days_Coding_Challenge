/* Code to check whether a number is Palindrome or not 

Palindrome Number :- Number which remains intact even on reversing.
                     ex:- 151 on reversing = 151

*/

#include<stdio.h>

int main()
{
    int n,rev=0,rem,og;

    printf("Enter any number :\n");
    scanf("%d",&n);
    
    // Stored the original input number because n will be manipulated in loop later
    og = n;

    //Reversed Integer is stored in rev variable
    while (n!=0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n/=10;
    }

   // Palindrome if Original & Reversed are equal 
    if(og==rev)
      printf("%d is a Palindrome Number",og);
    else 
      printf("%d is not a Palindrome Number",og);

    return 0;    
}

/*

Output :

Enter any number :
161
161 is a Palindrome Number

*/

/*

Output :


*/