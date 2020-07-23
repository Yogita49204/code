#include<stdio.h>
int sum(int num);
int main()
{
	int num,s;
	printf("enter the number:");
	scanf("%d",&num);
	s=sum(num);
	printf("the sum of digits of %d is %d",num,s);
	return 0;
}
int sum(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	return((num%10)+sum(num/10));
}
