/*Multiplying two floating point numbers and get output in both integer and floating representations*/
#include<stdio.h>
#include<math.h>

int main()

{
	float a,b,c;
	int d;
	
	printf("Enter the two floating point numbers");
	scanf("%f %f", &a, &b);
	
	c=a*b;
	d=c;
	
	printf("Multiplication output in floating point representation is %f\n",c);
	printf("Multiplication output in integer representation is %d",d);
	
	return 0;
}
