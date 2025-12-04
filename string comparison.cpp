#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100], s2[100], result[200];
	int choice, i, j, flag, len;
	printf("\n 1.find length");
	printf("\n 2.string copy");
	printf("\n 3.string compare");
	printf("\n 4.string reverse");
	printf("\n 5.string concatination");
	printf("\n 6.string lower case");
	printf("\n 7.string upper case");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
		        printf("enter the string");
		    	scanf(" %[^\n]",s1);
		    	
		    	len= 0;
		    	for(i = 0; s1[i] != '\0'; i++)
		    	    len++;
		    	    
		    	printf("length of given string = %d\n",len);
		    	break;
		    }
		case 2:
			{
				printf("enter source string: ");
		    	scanf(" %[^\n]", s1);
		    	
		    	for(i = 0; s1[i] != '\0'; i++)
		    	    s2[i] = s1[i];
		    	    
		    	s2[i] = '\0';
		    	printf("copied string = %s\n",s2);
		    	break;
		    }
		case 3:
			{
				printf("enter first string: ");
				scanf(" %[^\n]", s1);
				printf("enter second string: ");
				scanf(" %[^\n]", s2);
				
				flag = 0;
				for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
					if(s1[i] != s2[i]) {
						flag = 1;
						break;
					}
				}
				if(flag == 0)
				    printf("strings are EQUAL\n");
			    else
			        printf("strings are NOT equal\n");
			    break;
			}
		case 4:
			{
				printf("enter first string: ");
				scanf(" %[^\n]", s1);
				printf("enter second string: ");
				scanf(" %[^\n]", s2);
			
				for(i = 0; s1[i] != '\0'; i++)
				    result[i] = s1[i];
				    
				for(j = 0; s2[j] != '\0'; j++)
				    result[i +j] = s2[j];
				    
				return[i + j] = '\0';
			    printf("concatenated string = %a\n", result);
			    break;
			}
		case 5:
			{
				printf("enter a string: ");
				scanf(" %[^\n]", s1);
				
				for(i = 0; s1[i] != '\0'; i++)
				    if(s1[i] >= 'a' && s1[i] <= 'z')
				        s1[i] = s1[i] - 32;
				        
				printf("uppercase string = %s\n", s1);
				break;
			}
		case 6:
			{
				printf("enter a string: ");
				scanf(" %[^\n]", s1);
				
				for(i = 0; s1[i] != '\0'; i++)
				    if(s1[i] >= 'A' && s1[i] <= 'Z')
				        s1[i] = s1[i] + 32;
				        
				printf("lowercase string = %s\n", s1);
				break;
			}
		case 7:
			{
				printf("enter a string: ");
				scanf(" %[^\n]", s1);
			    
			    len = 0
			    for(i = 0; s1[i] != '\0'; i++)
			        len++;
			        
			    printf("reversed string = ");
			    for(i = len - 1; i >= 0;i--)
			        printf("%c", s1[i]);
			    printf("\n");
			    break; 
			
			default;
			     printf("invalid choice! Try again.\n");
		   }
		   return 0;
	}
	    
	    
}
