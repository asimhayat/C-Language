#include<stdio.h>
int main()
{
	int n,k=0,final=0,decimalno,rem=0,p=1,oct=0,j;

	printf("To convert into hexadecimal Enter 'H'\n");
    printf("To convert into Octal Enter 'O'\n");
    printf("To convert into Binary Enter 'B'\n");
    printf("To exit Enter 'E'\n");
	printf("Enter Character To Convert: ");
	scanf("\n%c", &n);
   if(n=='H')
   {
	int n;
	printf("Enter no:");
	scanf("%d",&n);
	printf("Hexadecimal no:%x",n);
	
}
   
   else if(n=='O')
   
 	{
	 printf("Enter the Decimal Number: ");
	 scanf("%d",&decimalno);
	 while(decimalno)
	 {
	 	rem=decimalno%8;
	 	oct=oct+rem*p;
	 	decimalno=decimalno/8;
	 	p=p*10;
	 }
	 	printf("Octal no:");
		 printf("%d",oct);
	 	
	 	
	 }
	 
	 	else if (n=='B')
	 {
	 	printf("Enter the Decimal Number:");
	 	scanf("%d",&j);
	 	while(j)
	 	{
	 		rem=j%2;
	 		final=final+rem*p;
	 		j=j/2;
	 		p=p*10;
		 }
		 printf("Binary no:");
	 	printf("%d",final);
	 	
	 }
	 else if (n=='E')
	 {
	 	exit(0);
	 }
	 else{
	 	printf("Enter character from given choice");
	 }
	 
 return 0; 
}
