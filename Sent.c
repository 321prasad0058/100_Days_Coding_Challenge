/*
Code to write a Sentence to a File 

Author : Prasad Anil Alai

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}
/*Output

Enter a sentence: Prasad is writing a Code

Here, a file named program.txt is created. The file will contain Prasad is writing a Code text.

*/