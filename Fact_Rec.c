#include<stdio.h>
long int multNos(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multNos(n));
    return 0;
}

long int multNos(int n) {
    if (n>=1)
        return n*multNos(n-1);
    else
        return 1;
}


/*

Output:

Enter a positive integer: 8
Factorial of 8 = 40320

*/
