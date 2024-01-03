#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter No out of 5 \n",a);
	scanf("%d",&a);
	if(a>0 && a<=5)
	{
	 b=a*100/5;
	 printf("%d Percent",b);
	}
	else{
	    printf("Please Enter under 5");
	}
	return 0;
}
