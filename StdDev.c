#include<stdio.h>
#include<math.h>

float calcSD(float data[]);

int main()
{
 int i;
 float data[10];

 printf("Enter 10 elements:\n");
   
   for(i=0;i<10;i++)
     scanf("%f",&data[i]);

   printf("Standard Deviation = %.6f",calcSD(data));
   return 0;
}

float calcSD(float data[])
{
    float sum =0.0,mean,SD=0.0;
    int i;
    for(i=0;i<10;++i)
    {
      sum+=data[i];
    }
    mean=sum/10;

    for(i=0;i<10;++i)
    {
        SD+= pow(data[i]-mean,2);
    }
    return sqrt(SD/10);
}

/*

Output:

Enter 10 elements:
1
2
3
4
5
6
6
7
8
8
Standard Deviation = 2.323790

*/