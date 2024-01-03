#include<stdio.h>
int main()
{
	float c;
	float cpermin= 3.9;
for(int i=10;i<=30;i+=5)	
	{
		c=i*cpermin;
		printf("%d Minutes :",i);
		printf("%f Calories\n",c);
	}
	return 0;
}
