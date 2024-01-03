#include <stdio.h>
#include <math.h>
int main() 
{
  double a, b, c;
  printf("Enter the coefficients a, b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  double rootvalue = b * b - 4 * a * c;
  double root1, root2;
  if (rootvalue > 0) {
    root1 = (-b + sqrt(rootvalue)) / (2 * a);
    root2 = (-b - sqrt(rootvalue)) / (2 * a);
    printf("The roots are %lf and %lf\n", root1, root2);
  } else if (rootvalue == 0) {
    root1 = -b / (2 * a);
    printf("The root is %lf\n", root1);
  } else {
    printf("Imaginary roots\n");
  }
  return 0;
}
