// We are finding the words count based on white spaces present in the given string. 
//The ASCII value of white space is 32.

#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i,words=0;
 
    // Taking Input
    printf("Enter  the string : ");
    gets(s);
     
    // If space occurs then word is incremented
    for(i=0;s[i];i++)  
    {
    	if(s[i]==32)
    	 words++;
 	}
 	if(i>0)
 	 words++;
     
    printf("no of words in string = %d\n",words);
    
    return 0;
}

/*

Output:

Enter  the string : We live on Earth and there are total 9 planets in Solar System. Jupiter is the biggest planet in the Solar System and Mercury is the smallest planet whereas Pluto is considered a Dwarf Planet.
no of words in string = 35

*/

