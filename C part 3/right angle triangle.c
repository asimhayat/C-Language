#include<stdio.h>

int main() {
    int i, spc, ro, str=0;
    
    printf("Enter the Number of Rows for the Triangle: ");
    scanf("%d",&ro);

    for(i = 0; i < ro-1; i++) {
        for(spc = 1; spc < ro-i; spc++) {
            printf("");
        }
        for (str = 0; str <= 2*i; str++) {
            if(str==0 || str==2*i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
   
    for(i=0; i<2*ro-1; i++) {
        printf("*");
    }
    return 0;
}
