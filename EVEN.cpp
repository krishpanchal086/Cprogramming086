//EVEN numbers from 1 to N
#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter the value of N to get EVEN numbers from 1 to N:-");
	scanf("%d", &n);
	for(a=2;a<=n;a=a+2)
	{
		printf("%d\n", a);
	}
	
	return 0;
	
	
}
