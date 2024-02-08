#include<stdio.h>
main()
{
	int a,n1,n2,sum;
	printf("Enter A Number: ");
	scanf("%d", &a);
	n1=a/10;
	n2=a%10;
	sum=n1+n2;
	printf("The Digit Sum Is: %d",sum);
        

	return 0;
}



