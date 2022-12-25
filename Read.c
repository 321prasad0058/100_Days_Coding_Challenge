/*
Code to Read the first line of a file 

Author : Prasad Anil Alai

*/

#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf("Error! File cannot be opened.");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(fptr, "%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}

/*
If the file is found, the program saves the content of the file to a string c until '\n' newline is encountered.

Suppose the program.txt file contains the following text in the current directory.

Jack and Jill went up the Hill
I love C programming
The output of the program will be:

Data from the file:
Jack and Jill went up the Hill

*/