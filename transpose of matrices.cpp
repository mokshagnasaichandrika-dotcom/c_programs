#include<stdio.h>
int main()
{
	int a[3][3],i,j,t[3][3];
	printf("enter array elements :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
 		}
 	}
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
	        t[i][j]=a[j][i];
    	}
        printf("transpose of matrix is :");
    }
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d",t[j][i]);
		}
		printf("\n");
	}
	return 0;
}

