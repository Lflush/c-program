#include<stdio.h>
int main ()
{
	int n,c,i,j;
	long long a[100][100]; 
	scanf("%d",&n);
	for(;n>0;n--)
	{
		scanf("%d\n",&c);
		for(i=0;i<c;i++)
		{
			for(j=0;j<=i;j++)
			{
				scanf("%lld",&a[i][j]);
			}
		}
		for(i=c-2;i>=0;i--)
		{
			for(j=0;j<=c-2;j++)
			{
				a[i][j]+=a[i+1][j]>a[i+1][j+1]?a[i+1][j]:a[i+1][j+1];
			}
		}
		printf("%d\n",a[0][0]);
	}
	return 0;
}
