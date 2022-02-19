#include <math.h>
#include <stdio.h>

int main() {
   int num, remainder, count = 0;
   int result = 0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   int temp = num;

   // store the number of digits of num in count
   
   for (temp = num; temp != 0; ++count) 
   {
       temp /= 10;
   }

   for (temp = num; temp != 0; temp /= 10) 
   {
       remainder = temp % 10;

      // store the sum of the power of individual digits in result
      
      result += pow(remainder, count);
      
   }

   // if num is equal to result, the number is an Armstrong number
   
   if (result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
    
   return 0;
}
