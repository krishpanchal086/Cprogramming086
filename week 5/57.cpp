//find the occurrence of a number in a given array
#include<stdio.h>
#include<math.h>
int main()
{
	
		int n,i,j,k,x=0,y;
	printf("Enter the value of n:");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter the value of k:");
	scanf("%d", &k);
	
	for(j=0;j<n;j++)
	{
		if(a[j]==k)
		{
			x++;
		}
	}
	printf("The Number %d is present %d times", k,x);
	return 0;
	
}
