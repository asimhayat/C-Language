#include<stdio.h>
int main()
{
    int i=0;
    char a[50];
    FILE *fp;
	fp = fopen("i.txt","w");
	printf("Enter text : ");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]=='0' || a[i]=='1' || a[i]=='2' || a[i]=='3'|| a[i]=='4'|| a[i]=='5'|| a[i]=='6'|| a[i]=='7'|| a[i]=='8'|| a[i]=='9')
        {
            a[i]='$';
        }
        i++;
    }
	printf("Success...");
	
    fprintf(fp,"Replace Integer by $");
    fprintf(fp,"\n%s",a);
    return 0;
}
