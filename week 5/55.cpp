//reverse the elements of the array
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
	
	for(j=0;j<n/2;j++)
	{
		k=a[j];
		a[j]=a[n-1-j];
		a[n-1-j]=k;
	}
	for(y=0;y<n;y++)
	{
		printf("%d\t", a[y]);
	}
	return 0;
}
