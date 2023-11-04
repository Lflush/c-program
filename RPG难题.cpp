#include<stdio.h>
int main()
{
	long long a[51]={0,3,6,6};
	int i;
	for(i=4;i<=50;i++)
	{
		a[i]=a[i-1]+2*a[i-2];
	}
	while(scanf("%d",&i)!=EOF)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}
