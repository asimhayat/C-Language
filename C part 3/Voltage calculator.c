#include<stdio.h>
int main()
{
	double c, r; 
    printf("Enter value of current(I): ");
	scanf("%lf", &c);
    printf("Enter value of resistance(R): ");
	scanf("%lf", &r);	  
	v(c,r);
	return 0;
}
void v(double current, double resistance)
	{  
    double v = current*resistance;
	printf("Voltage Is : %lf Volts",v);
	}
