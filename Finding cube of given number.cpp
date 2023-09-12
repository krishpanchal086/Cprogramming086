/*Finding cube of a given number*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b;
	
	printf("Enter any number");
	scanf("%f", &a);
	
	b=pow(a,3);
	printf("The cube of given number is %f",b);
	return 0;
	
}
