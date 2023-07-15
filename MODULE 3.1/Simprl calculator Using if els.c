#include<stdio.h>
int main()
{
	int digits;
	int a,b;
	
	printf("-----Enter tow Digits For Calculating-----\n");
	scanf("%d %d", &a,&b);
	printf("Enter Your Oprators...\n\n");	
	
	printf("Enter 1 For Addition (+)...\n");
	printf("Enter 2 For Subtraction (-)...\n");
	printf("Enter 3 For Multiplication (*)...\n");
	printf("Enter 4 For Division (/)...\n");
	printf("Enter 5 For modulo (%%)...\n");
	scanf("%d",&digits);
		
	if(digits == 1)
	{
	printf("\nAddition is...%d ",a+b);	
	}
	else if(digits == 2)
	{
	printf("\nSubtraction is...%d",a-b);	
	}
	else if(digits == 3)
	{
	printf("\nMultiplication is...%d",a*b);	
	}
	else if(digits == 4)
	{
	printf("\nDivision is...%d",a/b);	
	}
	else if(digits == 5)
	{
	printf("\nModulo is...%d",a%b);	
	}
	else
	{
	printf("\nPlz Enter Valid Digits\n%d");
	}
	
}