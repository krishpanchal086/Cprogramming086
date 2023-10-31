//sort the elements of array in ascending order
#include<stdio.h>
#include<math.h>
int main()
{
	
		int n,i,j,k,x,y;
	printf("Enter the value of n:");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(j=0;j<n;j++)
	{
		for(k=0;k<n-j;k++)
		{
			if(a[k]>a[k+1])
			{
				x=a[k];
				a[k]=a[k+1];
				a[k+1]=x;
			}
			
			
		}
	}
		for(y=0;y<n;y++)
	{
		printf("%d\t", a[y]);
	}
	return 0;
	
	
}
