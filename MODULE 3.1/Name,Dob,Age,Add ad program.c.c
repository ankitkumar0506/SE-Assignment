#include<stdio.h>
int main()
{
	char name[200];
	printf("Enter your full Name: ");
//	scanf("%S",&name);
	gets(name);
	printf("\nYour Name Is: %s \n\n",name);

	char bod[50];
	printf("\nEnter your Date of Birth: ");
//	scanf("%S",&name);
	gets(bod);
	printf("\nYour Birth Date Is: %s \n\n",bod);

	char age[10];
	printf("\nEnter Yor Age: ");
	gets(age);
	printf("\nYour Age Is: %s \n\n",age);
	
	char add[500];
	printf("\nEnter your address: ");
//	scanf("%S",&name);
	gets(add);
	printf("\nYour Address Is: %s \n\n",add);
}
