#include<stdio.h>
#include<math.h>
int main()
{
	double x1=1.5,y1=-3.75;
	for(;y1!=0;)
	{
		x1=x1-(2*pow(x1,3)-4*pow(x1,2)+3*x1-6)/(6*pow(x1,2)-8*x1+3); 
		y1=2*pow(x1,3)-4*pow(x1,2)+3*x1-6;
	}
	printf("x1=%lf",x1);
	return 0;
}
