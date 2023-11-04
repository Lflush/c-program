#include<stdio.h>
long long max(long long x,long long y)
{
	if(x>y)
	{
		return(x);
	}
	else
	{
		return(y);
	}
}
int main()
{
	int t,n;
	scanf("%d",&n);
	for(t=0;t<n;t++)//测试用例数量 
	{
		int s,i,j,m=0,q;
		long long a[100000]={0},b[100000]={0},maxsum=0,sum=0;
		scanf("%d",&s);
		for(j=0;j<s;j++)//整数数量 
		{
			scanf("%lld",&a[j]);//输入数字 
		}
		b[0]=a[0];
		for(j=1;j<s;j++)
		{
			b[j]=max(b[j-1]+a[j],a[j]);//b[i]为以a[i]为结尾的最大子序列和 
		}
		for(j=0;j<s;j++)
		{
			if(b[j]>b[0])
			{
				b[0]=b[j];//将最大的和放在b[0] 
				m=j;//记录子序列结束位置 
			}
		}
		/*for(i=0;i<=m;i++)
		{
			sum=0;
			for(j=i;j<s;j++)
			{
				sum+=a[j];
				if(maxsum<sum)
				{
					maxsum=sum;
					q=i;
					//printf("%d",q);
				}
			}
		}*/
		for(i=m;i>=0;i--)
		{
			sum=sum+a[i];//从结束位置开始向前累加 
			if(sum==b[0])//结果为最大和的记录此时位置即为子序列开始位置 
			{
				q=i;
			}
		}
		if(t!=n-1)
		{
			printf("Case %d:\n",t+1);
			printf("%lld %d %d\n\n",b[0],q+1,m+1);
		}
		else
		{
			printf("Case %d:\n",t+1);
			printf("%lld %d %d\n",b[0],q+1,m+1);
		}
	}
	return 0;
}
