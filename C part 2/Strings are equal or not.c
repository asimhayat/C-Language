#include<stdio.h>
#include<string.h> 
main()
{     
     char s1[20], s2[20]; 
     int r;
     printf("Enter An String: ");
     gets(s1);
     printf("Enter Another String: ");
     gets(s2);
     r= check(s1,s2); 
     if(r==0)
    {
    printf("Equal");
    }    
    else
    {
    printf("Not Equal");
    }
   return 0;
}
int check(char *x,char *y)  
{  
   int flag=0;  
    while(*x!='\0' && *y!='\0')  
    {  
        if(*x!=*y)  
        {  
            flag=1;  
        }  
        x++;  
        y++;  
    }  
      
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  
