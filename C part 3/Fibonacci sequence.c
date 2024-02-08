#include<stdio.h>

int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter A Number : ");
    scanf("%d", &n);
    printf("Sequence:");
    for (i=0;i<=n;i++) 
    {
      printf("%d ",a);
       c=a+b;
       a=b;
       b=c;
    }
    return 0;
}
