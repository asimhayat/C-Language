#include<stdio.h>
int main()
{
	float r,a,b;
	char c;
	printf("Enter Two Numbers\n");
	scanf("%f",&a);
	scanf("%f",&b);
	printf("Enter s for sum :+");
    printf("\nEnter m for minus :-");
	printf("\nEnter capital M for Multiply:*");
	printf("\nEnter d for divide:/\n");
	printf("Use character for operation:");
	scanf(" %c",&c);
	if(c=='s')
	{
		r=a+b;
		printf("Sum:%f",r);
	}
	else if(c=='m')
	{
		r=a-b;
		printf("Minus:%f",r);
	}
	else if(c=='M')
	{
		r=a*b;
		printf("Mutilply:%f",r);
	}
	else if(c=='d')
	{
		r=a/b;
		printf("Division:%f",r);
	}
	else
	{
		printf("enter character from given menu");
	}
	return 0;
}
