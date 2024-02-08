#include<stdio.h>  
 int main()    
{    
int n,sum=0,m,cube,square;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);
if(sum%2==0)
      {
	  cube=sum*sum*sum;
      printf("\nThe sum of digit is even\n");
	  printf("The Cube Of Sum is %d",cube);
	  }

else
{
        square=sum*sum;
        printf("\nThe sum of digit is Odd \n");
        printf("The Square Of Sum Is %d",square);
    }
return 0;  
}   