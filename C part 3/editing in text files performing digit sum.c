#include<stdio.h>
#include<string.h>
int main()
{   
    int sum,a,b,c,d,e,f,g;
    FILE *open;
	FILE *change;
	open = fopen("i.txt","r");
	change = fopen("o.txt","w");
	if (open == NULL)
	   {
	   	printf("Error");
	   }
	else
	{
	printf("Success... ");
	}
	 fscanf(open,"%d",&a);
      b=a/1000;  
      c=a%1000;
      d=c/100;
      e=c%100;
      f=e/10;
      g=e%10;
      sum=b+d+f+g;
	  fprintf(change,"The Sum Is:%d",sum);
    
 return 0;   
}
 

