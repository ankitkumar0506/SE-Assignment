#include<stdio.h>

int main()
{
	int year;
	printf("Check Leap Year or Not... \n\n");
	printf("Enter the Year... :- ");
	scanf("%d...",&year);
	if(year%4==0)
	{
		printf("%d is leap Year...",year);
	}
	else
	{
		printf("%d is not leap Year...",year);
	}
}