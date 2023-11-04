#include<stdio.h>
int main()
{
	int n;
	//long long a[1001]={0,1,2,4,7};
	/*for(i=5;i<=1000;i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-4];
	}*/
	while(scanf("%d",&n)!=EOF)
	{
		int a[1000]={1},b[1000]={2},c[1000]={4},d[1000];
		int i,j,k,m;
		for(i=0;i<n;i++)//加到几个数 
		{
			for(j=0;j<1000;j++)//每位数相加 
			{
				a[j]=a[j]+b[j]+c[j];
				if(a[j]>=10)
				{
					a[j]=a[j]-10;
					a[j+1]=a[j+1]+1;
				}
			}
			
		}
		printf("%lld\n",a[i]);
	}
	return 0;
}
