/*calculate percentage and grade*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	float f;
	printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer respectivly with giving a space between two of them");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	f=(a+b+c+d+e)/5;
	printf("The percentage of the student is %f\n", f);
	
	if(f>=90)
	{
		printf("Grade:A");
	}
	else if(f>=80 && f<90)
	{
		printf("Grade:B");
	}
	else if(f>=70 && f<80)
	{
		printf("Grade:C");
	}
	else if(f>=60 && f<70)
	{printf("Grade:D");
	}
	else if(f>=50 && f<60)
	{printf("Grade:E");
	}
	else if(f>=40 && f<50)
	{printf("Grade:E");
	}
	else
	{printf("Grade:F");
	}
	return 0;
}
