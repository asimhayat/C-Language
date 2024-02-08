#include<stdio.h>
int main()
{
	int k,r;
	printf("Insert no:");
	scanf("%d",&k);
	printf("Reverse No:");
	while(k>0)
	{
		r=k%10;
		printf("%d",r);	
		k=k/10;
	}
	return 0;
}