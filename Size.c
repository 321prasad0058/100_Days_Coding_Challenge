#include<stdio.h>

int main()
{
    int Type_Int;
    float Type_Float;
    double Type_Double;
    char Type_Char;

    //Evaluating the size with predefined sizeof function
    printf("Size of int: %zu bytes\n", sizeof(Type_Int));
    printf("Size of float: %zu bytes\n", sizeof(Type_Float));
    printf("Size of double: %zu bytes\n", sizeof(Type_Double));
    printf("Size of char: %zu bytes\n", sizeof(Type_Char));
}
/*

Output :

Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 bytes

*/