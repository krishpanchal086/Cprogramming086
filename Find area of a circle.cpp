/*C programme to Find the Area of a circle*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b;
	printf("Enter the radius of a circle");
	scanf("%f", &a);
	
	b=3.14*a*a;
	
	printf("The area of a circle is %f",b);
	return 0;
	
}
