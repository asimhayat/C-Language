#include<stdio.h>
int main()
{
	float a,b; 
    printf("Enter temperature In Fahrenheit: ");
	scanf("%f", &a);
	b = 5*(a-32)/9;
	printf("Temperature in Centigrade :%f ", b);
    	  
	return 0;
}
