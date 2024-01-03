#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Distance in KM\n",a);
	scanf("%d",&a);
	printf("Enter Time in hours \n",b);
	scanf("%d",&b);
	c=(a*1000)/(b*3600);
	printf("Speed");
	printf(" %d",c);
	printf(" Ms");
	return 0;
}
