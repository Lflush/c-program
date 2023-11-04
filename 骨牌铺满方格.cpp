#include<stdio.h>
int main()
{
	long long a[50]={1,2};
	int i;
	for(i=0;i<=47;i++)
	{
		a[i+2]=a[i+1]+a[i];
	}
	while (scanf("%d",&i)!=EOF)
	{
		printf("%lld\n",a[i-1]);
	}
	return 0;
}
