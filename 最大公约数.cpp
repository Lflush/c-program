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
	printf("���Լ��Ϊ%d\n",a);
	return 0;
}
