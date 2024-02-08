#include<stdio.h>
int main()
{
	float a,b;
	printf("QUIZ 1\n");
	printf("Total marks=15\n");
	printf("Enter the obtained marks: ");
	scanf("%f",&a);
	if(a>15)
	{
		printf("enter numbers out of 15");
	}
	else
	{
	
	b=(a*100)/(15);
	printf("The percentage of student CSC103 is: %f",b);
	return 0;
}
	
}
