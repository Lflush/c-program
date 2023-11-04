#include<stdio.h>
int main()
{
	int i,n,j;
	long long p,a[1000]={0};
	scanf("%d",&n);//输入N，N为棋子数 
	while(n!=0)//n=0结束 
	{
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);//输入棋子的值 
		}
		for(i=0;i<n;i++)
		{
			p=a[i];//p记录a[i]的值 
			for(j=i+1;j<n;j++)//扫描a[i]后面的数，大于a[i]的数加到a[i]里，p值更新为比a[i]值大的下一个数，继续扫描 
			{
				if(p<a[j])
				{
					a[i]=a[i]+a[j];
					p=a[j];
				}
			}//完成这步后，a[i]就是以第i个数开始向后递增的数相加的和 
		}
		for(i=1;i<n;i++)
		{
			if(a[0]<a[i])
			{
				a[0]=a[i];//找到最大的数放到a[0]里 
			}
		}
		if(a[0]<0)
		{
			a[0]=0;//如果最大的数小于0，则直接起点到终点得0分 
		}
		printf("%lld\n",a[0]);
		scanf("%d",&n); 
	}
	return 0;
}
