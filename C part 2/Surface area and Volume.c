#include <stdio.h>
#include <math.h>
int main()
 {
    double oneside, surfaceArea, volume;
    printf("Enter no: ");
    scanf("%lf", &oneside);
    surfaceArea = 6 * pow(oneside, 2);
    volume = pow(oneside, 3);
    printf("Surface area: %f\n", surfaceArea);
    printf("Volume: %f\n", volume);
    return 0;
}




