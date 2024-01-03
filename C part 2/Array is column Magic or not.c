#include <stdio.h>
int main() 
{
  int array[3][3];
  printf("Enter the values: \n");
  for(int i = 0; i < 3; i++) 
  {
    for (int j = 0; j < 3; j++) 
	{
      scanf("%d", &array[i][j]);
    }
  }
  int sum = 0;
  int magic = 1;
  for (int j = 0; j < 3; j++) 
  {
    if (j == 0) 
	{
      for (int i = 0; i < 3; i++)
	  {
        sum += array[i][j];
      }
    } else 
	{
      int col_sum = 0;
      for (int i = 0; i < 3; i++) 
	  {
       col_sum += array[i][j];
      }
      if (col_sum != sum) {
        magic = 0;
        break;
      }
    }
  }

  if (magic) 
  {
    printf("The array is column-magic\n");
  } else {
    printf("The array is not column-magic\n");
  }

  return 0;
}
