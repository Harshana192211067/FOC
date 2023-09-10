#include<stdio.h>
int main()
{
	int i,n,ar[50];
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements:\n ",n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:\t ",i+1);
		scanf("%d",&ar[i]);
	}
	printf("Reversed array are: \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d,",ar[i]);
	}
}
