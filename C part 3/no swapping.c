#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 Numbers\n");
	scanf("%d%d",&a,&b);
	printf("Number 1 before swapping = %d\nNumber 2 before swapping = %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nNumber 1 after swapping  = %d\nNumber 2 after swapping  = %d",a,b);
	return 0;

}
