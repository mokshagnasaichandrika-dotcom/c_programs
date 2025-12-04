//write a c program to find sum of elements in an array//
#include<stdio.h>
int main()
{
	int n, i;
	int sum = 0;
    int elements[n];
	printf("Enter array size: ");
	scanf("%d", &n);	 
	printf("Enter elements:\n");
	for (i = 0; i < n; i++)
	{		
	scanf("%d", &elements[i]); 
	}
	for (i = 0; i < n; i++)
	{
		sum += elements[i];
	}
	printf("The sum of array elements is: %d\n", sum);
	return 0;
}
