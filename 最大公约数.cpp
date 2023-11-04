#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a b\n");
	scanf("%d,%d",&a,&b);
	if(a<b)
	{
		int t=a;
		a=b;
		b=t;
	}
	while(b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("最大公约数为%d\n",a);
	return 0;
}
