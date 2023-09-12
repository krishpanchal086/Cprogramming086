/*C programme to perform all arithmetic operations*/
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,e,f,g,h;
	
	
	printf("Enter the two integer numbers");
	scanf("%d %d", &a, &b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("The sum of the numbers is %d\n",c);
	printf("The difference of the numbers is %d\n",d);
	printf("The multiplication of the numbers is %d\n",e);
	printf("The Division of two numbers is %d\n",f);
	printf("The modulo of two numbers is %d\n",g);	
	
	
	return 0;
}
