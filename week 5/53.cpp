//sort the elements of array in descending order
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
		for(k=j+1;k<n;k++)
		{
			if(a[j]<a[k])
			{
				x=a[j];
				a[j]=a[k];
				a[k]=x;
			}
			
		}
	}
		for(y=0;y<n;y++)
	{
		printf("%d\t", a[y]);
	}
	return 0;
	
	
}
