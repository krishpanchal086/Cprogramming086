//sum of all digits of a given number
#include<math.h>
#include<stdio.h>
int main()
{
	int a=0,b=0,n,c;
	printf("Enter the number to get the sum of the digits:-");
	scanf("%d", &n);
	for(a=0;n;)
	{
		
	c=n%10;
	n=n/10;	
	a=a+c;
	}
	printf("The sum of the digits is %d", a);
	return 0;
	
	
	
}
