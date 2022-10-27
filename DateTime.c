// In this code we'll implement the usage of time.h header file which will help us display date and time 

#include<stdio.h>
#include<time.h>

int main()
{
  time_t t1; // Not a PrimItive Data Type 
  time(&t1);

  // ctime() function displays the current date and time
  printf("This Code is being written at(Date and Time) %s",ctime(&t1));

  return 0;
}

/*

Output :

This Code is being written at(Date and Time) Thu Oct 27 20:35:05 2022

*/