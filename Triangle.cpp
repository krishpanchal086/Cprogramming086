/*finding type of a triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("Enter the values of three sides of the triangle");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b && a==c)
	{
		printf("This is an Equilateral triangle");
	}
	else if(a==b||b==c||a==c)
	{
		printf("This is an Isosceles triangle");
	}
	else
	{
		printf("This is a Scalene triangle");
	
	}
	return 0;
}
