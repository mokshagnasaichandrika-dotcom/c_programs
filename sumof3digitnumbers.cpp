#include<stdio.h>
int main()
{
	int n,s,r;
	printf("enter a 3 digit number :");
	scanf("%d",&n);
	s=0;
	while(n!=0)

	{
		r=n%10;
		s+=r;
		n=n/10;
	}
	printf("sum of digits is %d",s);
	return 0;
}
