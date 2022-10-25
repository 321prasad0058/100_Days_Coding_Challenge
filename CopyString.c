// Code to copy a String to another without using strcpy() math function

#include <stdio.h>

int main() 
{
    char s1[100], s2[100], i;

    // Taking 1st String Input
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    //Copying to 2nd String
    for (i = 0; s1[i] != '\0'; ++i) 
        s2[i] = s1[i];
    

    s2[i] = '\0';
    
    printf("String s2: %s", s2);
    
    return 0;
}
/*

Output :

Enter string s1: Hola Earth
String s2: Hola Earth

*/
