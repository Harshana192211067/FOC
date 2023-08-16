#include<stdio.h>
int main()
{
	int n,i,sum=0,cube;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube= i*i*i;
		sum+=cube;
	}
	printf("Sum of cubes of n numbers: %d",sum);
}
