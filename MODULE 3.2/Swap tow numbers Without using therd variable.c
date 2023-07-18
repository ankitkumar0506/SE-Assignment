/*Swap tow Numbers Without sinmg therd variable...*/

#include<stdio.h>

int main()
     
{    
	printf("Enter Tow Numbers...\n");
	int a, b; 
	scanf("%d %d",&a,&b);    
	printf("Before swap a=%d b=%d\n\n",a,b);      
	a=a+b;//a=30 (10+20)    
	b=a-b;//b=10 (30-20)    
	a=a-b;//a=20 (30-10)    
	printf("\nAfter swap a=%d b=%d",a,b);    
  
}   