 // Code to compute Armstrong Numbers upto N

#include<stdio.h>
#include<math.h>

int main()
{
    int num,last,digit,s,i,limit;
    
    // Taking end limit from the user
    printf("Enter the upper limit:\t");
    scanf("%d",&limit);

   printf("Armstrong Number from 1 to %d are :\n",limit);

   // For Loop to compute numbers upto end limit
   for(i=0;i<=limit;i++)
   {
    s =0;
    //Copying the value of num for processing
    num=i;

    // Finding total digits in the number
    digit= (int)log10(num) + 1;

    while(num>0)
    {   // Seperating the last digit of the number
        last = num%10;
        
        // Calculating sum of power of digits
        // Ceil function is used to remove any error of rounding  off by pow function
        s = s + ceil(pow(last,digit));

        //Removing the last digits  
        num = num/10;

        if(i==s)
        {
            printf("%d\t",i);
        }
    }
   }
   return 0;
}