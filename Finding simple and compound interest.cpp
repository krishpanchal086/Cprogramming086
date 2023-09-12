/*Programme to fint simple and compound interest*/
#include<stdio.h>
#include<math.h>

int main()
{
	
	float p,t,i,s,c;
	
	printf("Enter the Principle Amount");
	scanf("%f",&p);
	printf("Enter the time period in years");
	scanf("%f", &t);
	printf("Enter the yearly interest rate");
	scanf("%f",&i);
	
	s=p*i*t/100;
	
	printf("The simple interest for given data is %f",s);
	
	c=p*pow(((t+i)/t),t);
	
	printf("The compound interest for given data is %f",c);
	
	
	
	return 0;
}
