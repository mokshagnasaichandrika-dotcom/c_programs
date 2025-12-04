#include<stdio.h>
int main()
{
	int num,factor,i;
	factor=0;
	printf("enter the value of number");
	sacnf("%d",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor=factor++;
		}
		if(factor>2)
		{
			printf("not p");
		}
		else
		{
			printf("prime");
		}
		return 0;
	}
}
