//ODD numbers from 1 to N
#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter the value of N to get ODD numbers from 1 to N:-");
	scanf("%d", &n);
	for(a=1;a<=n;a=a+2)
	{
		printf("%d\n", a);
	}
	
	return 0;
	
	
}
