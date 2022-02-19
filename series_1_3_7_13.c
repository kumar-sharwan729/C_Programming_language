#include <stdio.h>

int main()
{
   int i,n;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\nThe square natural upto %d terms are :",n);
   for(i=1;i<=n;i+=3)
   {
     printf("%d  ",i);
   }
   
   return 0;
}
