#include<stdio.h>
long long max(long long x,long long y)//����ȽϺ��� 
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
	scanf("%d",&n); //����n���ڱ� 
	while(n!=0)
	{
		int i,j,m,m1=0;
	    long long a[100000][11]={0}; 
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&j,&m);//jΪλ�ã�mΪʱ�� 
			a[m][j]+=1; //��������a 
			//printf("%lld",a[m][j]);
			if(m1<m)
			{
				m1=m;//�������ʱ�� 
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
				    a[i][j]+=max(max(a[i+1][j-1],a[i+1][j]),a[i+1][j+1]);//�����ۼ� 
				//printf("%lld",a[i][j]);
			}
			//printf("\n");
		}
		printf("%lld\n",a[0][5]);//�����λ�þ�������ڱ��� 
		scanf("%d",&n);//��������n 
	}
	return 0;
}
