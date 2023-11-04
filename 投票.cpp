#include<stdio.h>
void counts(int n,char(*p)[6])
{
	int i,j,k,m,b[5]={0}; 
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<6;j++)
		{
			if(p[i][j]=='1')
			{
				k++;
			}
		}
		if(k<2)
		{
			for(m=0;m<6;m++)
			{
				p[i][m]=0;
			}
		}
	}
	for(j=0;j<6;j++)
	{
		for(i=0;i<n;i++)
		{
			if(p[i][j]=='1')
			{
				b[j]++;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("the candidate %d win %d votes！\n",i+1,b[i]);
	}
}
int main()
{
	int n,i,j,k;
	char a[100][6];
	printf("请输入投票人数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%c",&a[i][j]);
		}
	}
	counts(n,a);
	return 0;
}
