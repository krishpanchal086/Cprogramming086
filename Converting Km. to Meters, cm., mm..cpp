/*C programme to convert Kilometers into Meters, Centimeters and Milimeters*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,d;
	
	printf("Enter the length in Kilometers");
	scanf("%f", &a);
	
	b=a*1000;
	c=b*100;
	d=b*1000;
	
	printf("Length in Meters is %f\n Length in centimeters is %f\n Length in milimeters is %f",b,c,d);
	
	return 0;
	
}
