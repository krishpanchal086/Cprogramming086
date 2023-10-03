//Multiplication table of N
#include<stdio.h>
#include<math.h>
int main()
{
	int a=1,b,n;
	printf("Enter the number N to get it's multiplication table");
	scanf("%d", &n);
	for(a=1;a<=10;a++)
	{
		b=a*n;
		printf("%d*%d=%d\n", n,a,b);
	}
	return 0;
	
}
