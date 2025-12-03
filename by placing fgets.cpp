#include<stdio.h>
int main()
{
	char name[10],full_name[20],Address[30];
	printf("Enter your name:"); 
	scanf("%s",name);
	printf("%s",name);
	getchar();	
	printf("Enter your full name:");
	fgets(full_name,sizeof(full_name),stdin);
	printf("\n%s",full_name);	
}
