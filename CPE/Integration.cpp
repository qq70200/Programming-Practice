#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	double a;
	double x,y,z;
	double pi;
	
	while(scanf("%lf",&a)!=EOF)
	{
		pi = 2.0*acos(0.0);
		z = 2*(a*a/2.0-a*a*sqrt(3.0)/8.0-a*a*pi/12.0);
		y = a*a-a*a*pi/4.0-2*z;
		
		z=4*z;
		y=4*y;
		x=a*a-y-z;
		
		printf("%.3lf %.3lf %.3lf\n",x,y,z);
	}
	return 0;
}
