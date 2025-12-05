#include<stdio.h>
int main()
{
	int a[5]={23,34,34,54,43};
	int *p1 = &a[0];
	int *p2 = &a[1];
	int difference = p2-p1;
	printf ("difference in elements: %d",difference);
	return 0;
}
