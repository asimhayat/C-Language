#include<ctype.h>
#include <stdio.h> 
int main()
{
    int i = 0;
    char str[1000];
    char c;
     printf("Enter the string: ");
     gets(str);
    while (str[i]) 
	{
        c = str[i];
        putchar(tolower(c));
        i++;
    }
 
    return 0;
}
