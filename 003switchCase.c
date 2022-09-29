#include<stdio.h>
#include<math.h>
void main()
{
	int choice,n;
	float p,r,t;
	printf("1 for even odd\n");
	printf("2 for simple intrest\n");
	printf("3 for compound intrest (half yearly)\n");
	printf("4 for compound intrest (yearly)\n"); scanf("%d",&choice);
	switch(choice)
	{
		case 1:/*even odd*/
			printf("Enter a Number : "); scanf("%d",&n);
			(n&1)?printf("%d is odd\n",n):printf("%d is even\n",n);
		break;
		case 2:/* simple intrest*/
			printf("Enter the principal amount : "); scanf("%f",&p);
			printf("Enter the rate of intrest  : "); scanf("%f",&r);
			printf("Enter the time             : "); scanf("%f",&t);
			printf("simple intrest             : %.2f\n",((p*r*t)/100));
		break;
		case 3:/*compoud intrest half yearly*/
			printf("Enter the principal amount   : "); scanf("%f",&p);
			printf("Enter the rate of intrest    : "); scanf("%f",&r);
			printf("Enter the time               : "); scanf("%f",&t);
			printf("Compound intrest half yearly : %.2f\n",(p*pow(1+((r/2)/100),2*t)));
		break;
		case 4:/*compound intrest yearly*/
			printf("Enter the principal amount   : "); scanf("%f",&p);
			printf("Enter the rate of intrest    : "); scanf("%f",&r);
			printf("Enter the time               : "); scanf("%f",&t);
			printf("Compound intrest half yearly : %.2f\n",(p*pow(1+(r/100),t)));
		break;
		default: printf("please enter number between (1-4)\n");
	}
}

