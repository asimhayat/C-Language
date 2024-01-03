#include <stdio.h>
int main()
 {
  int r, c, a[100][100], b[100][100];
  int sum[100][100], i, j, summ[100][100];
  
  printf("Rows: ");          
  scanf("%d", &r);
  printf("columns: ");              
  scanf("%d", &c);
  
  printf("\nEnter elements for 1st matrix:\n");          
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
	{
      printf("Enter the  elements : ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements for 2nd Matrix:\n");             
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
	{
      printf("Enter the elements: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
	 {
      sum[i][j] = a[i][j] + b[i][j];
    }
    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
	 {
      summ[i][j] = a[i][j] * b[i][j];
    }
  printf("\n\nAfter ADDITION");
  printf("\nSum of two matrices are: \n");                 
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
	 {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) 
	  {
        printf("\n\n");
      }
    }
    printf("After MULTIPLICATION");
    printf("\nMultiple of two matrices are : \n");        
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
	{
      printf("%d   ", summ[i][j]);
      if (j == c - 1) 
	  {
        printf("\n\n");
      }
    }
  return 0;
}
