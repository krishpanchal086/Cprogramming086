#include<stdio.h>
#include<math.h>

int main()

{
	int a=10,b=30;
	printf("The initial values of variable a and b is %d and %d respectivly\n",a,b);
	
	b=b-a;
	a=a+b;
	b=a-b;
	
	printf("After swaping the values of a and b is %d and %d respectivly",a,b);
	return 0;
}
