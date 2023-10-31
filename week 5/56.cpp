//kkksdfiosudfhsrieufgb
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
	
	printf("Entre the value of k:");
	scanf("%d", &y);
	printf("The kth smallest element is %d\n", a[y-1]);
	printf("The kth largest element is %d", a[n-y]);
	
	return 0;
	
	
	
}
