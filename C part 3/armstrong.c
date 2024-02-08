#include<stdio.h>
int main()
{
	//input 111 --->1*1*1 + 1*1*1 + 1*1*1 =111
	int n,a=0,r,c;
	printf("Enter Number: ");
	scanf("%d", &n);
	c=n;
	 if(n<100)
  {
  	printf("Error-Please enter three digit no");

  }
  else if(n>999)
  	{
  		  printf("Error-Please enter three digit no");
  		
	  }

  else {
  	
  
	while(n>0)
	{
		r=n%10;
		a=(r*r*r)+a;
		n=n/10;
	}
	if(c==a)
	{
		printf("Armstrong Number");
		
	}
	
	else
	printf("Not an Armstrong Number");
	
	return 0;
	
}
	