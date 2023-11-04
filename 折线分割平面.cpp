#include<stdio.h>
int main()
{
	int n,i,j,m,a[10001]={1,2,7};
	for(m=3;m<=10000;m++)
	{
		a[m]=a[m-1]+4*(m-1)+1;
	}
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)//测试实例的个数 
		{
			scanf("%d",&j);//折线数 
			printf("%d\n",a[j]);
		}
	}
	return 0;
}
