#include<stdio.h>
int main()
{
    char ch;
    int low_Vow, up_Vow;

    printf("Enter an Alphabet:\n");
    scanf("%c",&ch);
    
    // Evaluates to 1 if inputed alphabet is a lowercase Vowel
    low_Vow= (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    
    // Evaluates to 1 if inputed alphabet is a uppercase Vowel
    up_Vow= (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');

    // Evaluates to TRUE if inputed alphabet is a vowel
    if(low_Vow||up_Vow)
      printf("%c is a Vowel",ch);
    else
      printf("%c is a Consonant",ch);  

    return 0;  
}

/*

Output:

Enter an Alphabet:
B
B is a Consonant

*/