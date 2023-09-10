#include<stdio.h>
int main()
{
	int temp,num1,num2;
	printf("Enter number 1: ");
	scanf("%d",&num1);
	printf("\nEnter second number: ");
	scanf("%d",&num2);

	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	printf("\nAfter swapping num1 is : %d; num 2 is %d",num1,num2);
}

