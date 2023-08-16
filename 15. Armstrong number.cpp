#include<stdio.h>
int main()
{
	int arm=0,i,num,num2,rem;
	printf("Enter number: ");
	scanf("%d",&num);
	num2=num;
	while(num2!=0)
	{
		rem=num2%10;
		arm=arm+(rem*rem*rem);
		num2=num2/10;
	}
	if(arm==num)
	printf("Given number is Armstrong number!!");
	else
	printf("Given number is not Armstrong number!!");
}
