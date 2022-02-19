#include<stdio.h>

int main()

{
	pattern();
	
	return 0;
}


 pattern()
{
	int i,j,k,n;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		
		for(k=0; k<2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
