/*checking equality of three numbers*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("Enter the three numbers");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a==b && a==c)
	{
		printf("given numbers are equal");
	}
	else
	{
		printf("given nymbers are not equal");
	}
	
	return 0;
}

