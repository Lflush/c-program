#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(;n>0;n--)
	{
		int i=0,j=0,m=0,p=0,q=0,a[400]={0};
		scanf("%d",&i);
		for(j=0;j<i;j++)
		{
			scanf("%d %d",&p,&q);
			if(q>p)
			{
				if(p%2==0)
			    {
				  a[p-2]++;
			    }
			    if(q%2!=0)
			    {
				  a[q]++;
			    }
			}
			else
			{
				if(q%2==0)
			    {
				  a[q-2]++;
			    }
			    if(p%2!=0)
			    {
				  a[p]++;
			    }
			}
			for(m=0;m<400;m++)
			{
				if(q>p)
				{
					if(m+1>=p&&m+1<=q)
					{
						a[m]++;
					}
					
				}
				else
				{
					if(m+1<=p&&m+1>=q)
					{
						a[m]++;
					}
				}
			}
		}
		for(i=0;i<400;i++)
		{
			//printf("%d",a[i]);
			if(a[i]>a[0])
			{
				a[0]=a[i];
			}
		}
		printf("%d\n",a[0]*10);
	}
	return 0;
}
