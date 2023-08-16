#include<stdio.h>
int main()
{
	int sum=0,n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2 != 0)
		{
			sum+=(i*i);
		}
	}
	printf("Sum of squares of odd numbers: %d\n",sum);
}
