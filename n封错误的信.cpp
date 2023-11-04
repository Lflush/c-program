#include<stdio.h>
int main()
{
	long long a[20]={0,1,2};
	int i;
	for(i=3;i<=19;i++)
	{
		a[i]=(a[i-1]+a[i-2])*i;
	}
	while(scanf("%d",&i)!=EOF)
	{
		printf("%lld\n",a[i-1]);
	}
	return 0;
}
