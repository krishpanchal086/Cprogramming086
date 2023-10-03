//Reverse of given number
#include<stdio.h>
#include<math.h>
int main()
{
	int a=1,b,n,c;
	printf("Enter The number you want to reverse:-");
	scanf("%d", &n);
	printf("The reverse of the number is");
	for(a=1;n;)
	{
		
		c=n%10;
		printf("%d", c);
		n=n/10;
	}
	
	return 0;
}
