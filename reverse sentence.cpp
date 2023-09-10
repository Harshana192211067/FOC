#include<stdio.h>
void reversesent();
int main()
{
    printf("Enter sentence: "); 
    reversesent();//--->1
    return 0;
}
void reversesent()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
    	reversesent();//---->2
        printf("%c",c);
    }
}

