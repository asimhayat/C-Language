#include<stdio.h>
int main()
{
	char ab;
	printf("Enter character:");
	scanf("%c",&ab);

	if (ab>='a')
	{
		printf("Lower case");
	}
	
	else if  (ab>='A')
		{
		printf("Upper Case");
}
	return 0;
}
