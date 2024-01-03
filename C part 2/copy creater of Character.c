#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[20],s2[20];
	printf("Enter string:");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("copy :%s",s2);
}
