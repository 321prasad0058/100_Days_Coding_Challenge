#include<stdio.h>
int main()
{
    char str[1000],ch;
    int count = 0;

    printf("Enter any string:\n");
    fgets(str,sizeof(str),stdin);

    printf("Enter a character to find it's frequency:\n");
    scanf("%c",&ch);

    for(int i=0;str[i]!='\0';++i)
    {
        if(ch==str[i])
          ++count;
          
    }

   printf("Frequency of %c is %d",ch,count);
   return 0;

}

/*

Output :

Enter any string:
Hola Earth we are finding character frequency
Enter a character to find it's frequency:
e
Frequency of e is 5

*/