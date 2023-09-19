/*Printing a number of days in a given month*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("Enter the year and Month respectively\n");
	scanf("%d %d", &a, &b);
	
	if(a%4==0 && (a%100!=0||a%400==0))
	{
		if(b==2)
		{printf("Number od days is 29");
		}
		else if(b==4||b==6||b==9||b==11)
		{printf("Number od days is 30");
		}
		else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
		{printf("Number od days is 31");
		}
		else
		{printf("Please enter a valid month");
		}
	}
	
	else
	{   if(b==2)
		{printf("Number od days is 28");
		}
		
		else if(b==4||b==6||b==9||b==11)
		{printf("Number od days is 30");
		}
		else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
		{printf("Number od days is 31");
		}
		else
			{printf("Please enter a valid month");
		}	
	}
	return 0;
	
	
}
