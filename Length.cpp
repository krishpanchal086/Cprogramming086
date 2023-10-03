//Finding length of number
#include<stdio.h>
#include<math.h>
int main()
{
	int a=0,n,b;
	printf("Enter the number N to get its length");
	scanf("%d", &n);
	for(a=0;n;a++)
	{
		n=n/10;
	}
	printf("%d",a);
	return 0;
	
}
