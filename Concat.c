#include<stdio.h>
int main()
{
    char s1[100]= "Hola",s2[]="Earth";
    int l,j;
    
    // Store length of s1 in l variable
    l=0;
    while(s1[l]!='\0')
      ++l;
    
    //Concatenate s2 to s1
    for(j=0;s1[j]!='\0';++j,++l)
      s1[l]=s2[j];
      
    //Terminating the s1 String 
    s1[l]='\0';

    printf("After Concatenation:\n");
    puts(s1);  
}

/*

Output:

After Concatenation:
HolaEarth

*/