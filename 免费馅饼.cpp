#include<stdio.h>
long long max(long long x,long long y)//定义比较函数 
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
	int n; 
	scanf("%d",&n); //输入n个馅饼 
	while(n!=0)
	{
		int i,j,m,m1=0;
	    long long a[100000][11]={0}; 
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&j,&m);//j为位置，m为时间 
			a[m][j]+=1; //存入数组a 
			//printf("%lld",a[m][j]);
			if(m1<m)
			{
				m1=m;//计算最大时间 
			}
			//printf("%d",m1);
		}
		for(i=m1-1;i>=0;i--)
		{
			for(j=0;j<11;j++)
			{
				if(j-1<0)
				{
					a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
				}
				if(j=10)
				{
					a[i][j]+=max(a[i+1][j-1],a[i+1][j]);
				}
				else 
				    a[i][j]+=max(max(a[i+1][j-1],a[i+1][j]),a[i+1][j+1]);//向上累计 
				//printf("%lld",a[i][j]);
			}
			//printf("\n");
		}
		printf("%lld\n",a[0][5]);//最初的位置就是最大馅饼数 
		scanf("%d",&n);//重新输入n 
	}
	return 0;
}
