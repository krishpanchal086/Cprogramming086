/*finding maximuum value*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter the three values of the points of techniques");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && a>c)
	{
		printf("%d is maximum value", a);
	}
	
	else if(b>c)
	{
		printf("%d is maximum value", b);
	}
	else
	{
		printf("%d is maximum value", c);
	}
	
	return 0;
	}
