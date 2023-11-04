#include<stdio.h>
#include<math.h>
#include<string>
/*double diedai(double x0)
{
	
	if(fabs(y0)<1e-6)
	{
		return x0;
	}
	else
	{
		x0=diedai(x0);
	}
	
}*/
int main()
{
	int a,b,c,d;
	//double x=1;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	double x0=1,y0=1,dy;
	//int a=1,b=2,c=3,d=4;
	for(;fabs(y0)>1e-6;)
	{
		y0=a*pow(x0,3)+b*pow(x0,2)+c*x0+d;
	    dy=3*a*pow(x0,2)+2*b*x0+c;
	    x0=-y0/dy+x0;
	}
	printf("x=%lf\n",x0);
	return 0;
} 
