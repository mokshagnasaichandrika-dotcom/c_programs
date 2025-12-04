#include<stdio.h>
int multiply(int a, int b)
{
	return a*b;
}
int main()
{
	int a=7,b=11, mul;
	mul=multiply(a,b);
	printf("multiplication of a and b is:%d",mul);
}
