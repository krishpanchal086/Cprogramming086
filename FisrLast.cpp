//Sum of first and last digits
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b=0,n,c;
	printf("Enter the number to get the sum of it's first and last digits");
	scanf("%d", &n);
	a=n%10;
	for(b=0;n;)
	{
		c=n%10;
		n=n/10;
	}
	
	b=a+c;
	printf("The sum of the first and last digits is %d" ,b);
	return 0;
}
