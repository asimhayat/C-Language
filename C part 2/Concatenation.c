#include<stdio.h>
#include<string.h> 
int main()
{     
     char s1[20], s2[20]; 
     char result;
     printf("Enter String: ");
     gets(s1);
     printf("Enter another String: ");
     gets(s2);
     joinstring(s1,s2); 
     printf("Concatenated String is:%s\n", s1);
   return 0;
}
int joinstring(char* s1, char* s2)
{
    int i;
    int j = strlen(s1);
    for (i = 0; s2[i] !='\0'; i++) 
    {
        s1[i + j] = s2[i];
    }
        s1[i + j] = '\0';
    }  
