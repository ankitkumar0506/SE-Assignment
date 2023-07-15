//p=Principal(Total Amount)
//r=Rate(%)
//t=Time
//S.I=Mens Simpel Intrest

#include<stdio.h>
int main()
{
	float p, r, t, SI;
	
		printf("Enter Principal(Total Amount)...");
		scanf("%f", &p);
		
			printf("\nEnter Rate(%)...");
			scanf("%f",&r);
			
				printf("\nEnter Duradtion Time...");
				scanf("%f",&t);
				
					SI=p*r*t/100;
					printf("\nyour Simple Intrest is...%f\n",SI);
					
						printf("Your Total Amouth with Intrest is...%f",SI+p);
					
				
}