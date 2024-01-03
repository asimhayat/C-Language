#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[1000];
    char c;
  	printf("Enter an email: ");
  	gets(str);
  	if(strchr(str,'@'))
  	{
  		printf("In this email character '@' found ");
	}
	else 
	{
		printf("In this email character '@' not found",c );
		
	}
	return 0;
 }
