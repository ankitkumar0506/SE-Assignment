#include<stdio.h>
int main()
{
	int a[2][3];
	int b[2][3];
	int c[2][3];
	int row,col;
	printf("-----First Matrix-----\n\n\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("Enter Element : ");
			scanf("%d",&a[row][col]);
		}
	}		
	printf("\n\n");
	for(row = 0;row<2;row++)
		{
			for(col=0;col<3;col++)
			{
				printf(" %d   ",a[row][col]);
			}
		printf("\n");
		}
		printf("\n\n\n");
	
	printf("----second matrix-----\n\n\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("Enter Element : ");
			scanf("%d",&b[row][col]);
		}
	}		
	printf("\n\n");
	for(row = 0;row<2;row++)
		{
			for(col=0;col<3;col++)
			{
				printf(" %d   ",b[row][col]);
			}
		printf("\n");
		}
		printf("\n\n\n");
	
		printf("----Matric Multiplication----\n\n\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]= a[row][col] * b[row][col];
			printf("  %d   ",c[row][col]);
		}
		printf("\n");
	}

	
	
}
