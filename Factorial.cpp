//Finding factorial of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,c=1;
	printf("Enter the number N of your choice");
	scanf("%d", &n);
	for(a=1;a<=n;a++)
	{
		c=c*a;
	}
	printf("%d",c);
	return 0;
	
	
	
}
