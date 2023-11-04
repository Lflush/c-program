#include<stdio.h>
void swap(int (*p)[3])
{
	int i,j,t;
	for(i=0;i<3;i++)
	{
		for(j=0;j<i;j++)
		{
			t=p[i][j];
			p[i][j]=p[j][i];
			p[j][i]=t;
		}
	}
}
int main()
{
	int a[3][3],i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	swap(a);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
