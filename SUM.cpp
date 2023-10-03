//Finding the sum of first Nnumbers
#include<stdio.h>
#include<math.h>
int main()
{
	int b=1,a,n;
	printf("Enter the value of N to get the sum of first N natural numbers");
	scanf("%d", &n);
	a=((n)*(n+1))/2;
	printf("%d", a);
	return 0;
	
}
