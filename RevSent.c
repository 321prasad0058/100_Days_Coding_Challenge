#include<stdio.h>
void revSent();

int main()
{
    printf("Enter a Sentence:\n");
    revSent();
    return 0;
}

void revSent()
{
    char c;
    scanf("%c",&c);

    if(c!='\n')
    {
        revSent();
        printf("%c",c);
    }
}

/*

Output :

Enter a Sentence:
HELLO WORLD
DLROW OLLEH

*/