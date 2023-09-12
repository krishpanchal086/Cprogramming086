/*C progrmme to find the area of a square*/
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	
	printf("Entre the length of the square");
	scanf("%d", &a);
	b=pow(a,2);
	printf("The area of a square is %d",b);
	return 0;
}
