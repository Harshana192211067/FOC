#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("%d\t%d",num1,num2);
}
