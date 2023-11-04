#include<stdio.h>
#include<math.h>
#include<string.h>
double p(int n,double x)//勒让德函数 
{
	double y;
	if(n==0)
	{
		y=1;
		return y;
		//printf("1\n");
	}
	else if(n==1)
	{
		return x;
		//printf("%lf\n",x);
	}
	else
	{
		y=((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;//递归 
		return y;
		//printf("%lf\n",y);
	}
}
int main()
{
	double p(int,double);
	int n;
	double x;
	scanf("%d%lf",&n,&x);//n为阶数，x为变量 
	//printf("%d %lf\n",n,x);
	//x=p(n,x);
	printf("%lf\n",p(n,x));
	return 0;
}
