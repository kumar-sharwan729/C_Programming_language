#include<stdio.h>
//#include<string.h>

int main()

{
	int row,  space,col;
	
	for(row=1; row<=5; row++)
	{
		for(space=1; space<=5-row; space++)
		{
			printf(" ");
		}
		for(col=1; col<=2*row-1; col++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
