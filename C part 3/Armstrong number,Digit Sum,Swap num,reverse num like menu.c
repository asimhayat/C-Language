#include<stdio.h>
#include<string.h>
int main()
{   
    char a[50]; 
    int i,len,vowel=0;
	FILE *open;
	open = fopen("desktop.txt","r");
	printf("Success...\n");
	fgets(a,"%s",open);
      len=strlen(a);
	  for(i=0;i<len;i++)
      {
	if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
			vowel=vowel+1;
      }
		if(vowel==1)
		{
		printf("There Is Only %d Vowel",vowel);
	    }
	    else 
	    {
	    printf("There Are %d Vowels",vowel);	
		}
	return 0;
} 
  
