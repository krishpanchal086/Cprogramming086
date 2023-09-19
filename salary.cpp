/*Calculating salary*/
#include<stdio.h>
#include<math.h>
int main()

{
	int a,b,h,d,f;
	printf("region category: \nMetro city=1 \nTier-1 city=2 \nTier-2 city=3 \nTier-3 city=4 \nEnter your basic salary and the number of your region");
	scanf("%d %d", &a, &b);
	
	d=(a*45)/100;
	
	if(b==1)
	{
		h=(b*25)/100;
	}
	else if(b==2)
	{
		h=(b*20)/100;
	}
	else if(b==3)
	{
		h=(b*16)/100;
	}
	else if(b==4)
	{
		h=(b*12)/100;
	}
	else
	{
		printf("please enter a valid region number\n");
	}
	
	f=a+d+h;
	if(b==1||b==2||b==3||b==4)
	{
		printf("The total salary of an employee is %d", f);
	}
			
	return 0;
	 
	
}
