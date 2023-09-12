/*C programme to calculate percantage of the student with the given subject marks */
#include<stdio.h>
#include<math.h>

int main()

{
	float a,b,c,d,e,f,g;
	
	printf("Enter the marks of five subjects");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	printf("Enter the maximum possible marks");
	scanf("%f", &f);
	g=((a+b+c+d+e)*100)/f;
	printf("The percentage of the studenst is %f",g);
	
	return 0;
}
