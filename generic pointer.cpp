#include<stdio.h>
int main()
{
	int a =10;
	float b = 4.5;
	void *p;
	
	p=&a;
	printf(" integer value : %d\n",*(int*)p);
	
	p=&a;
	printf(" float value : %f",*(float*)p);
	
}
