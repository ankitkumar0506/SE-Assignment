#include<stdio.h>
int squre()
{
	float radius;
	printf("Enter Lent...\n");
	scanf("%f",&radius);
	printf("value is... %f\n",radius*radius );
}
int circul()
{	float radius;
	printf("Enter your Radiusion...\n");
	float pi = 3.14;
	scanf("%f",&radius);
	printf("valu is... %f\n",pi*radius*radius);
}
int triangle()
{
	float base;
	float height;
	printf("Enter Your Base...\n");
	scanf("%f",&base);
	printf("Enter Your Height...\n");
	scanf("%f",&height);
	printf("Value is... %f\n",base*height/2);
}
int rectangle()
{
	float length;
	float width;
		printf("Enter Your Length...\n");
	scanf("%f",&length);
		printf("Enter Your width...\n");
	scanf("%f",&width);
	printf("Value is... %f\n",length*width);
}
int main()
	{
		printf ("select you radius scal\n");
		int a;
		printf(" 1.Squre....\n 2.Circle....\n 3.Triangle....\n 4.Rectangle....\n");
		scanf("%d",&a);
	if (a==1)
	{
		squre();
	}
	else if (a==2)
	{
		circul();
	}
	else if(a==3)
	{
		triangle();
	}
	else if (a==4)
	{
		rectangle();
	}
}