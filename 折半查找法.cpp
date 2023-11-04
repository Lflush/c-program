#include<stdio.h>
int main()
{
	int r=14,l=0,m=0,n;
	int a[15];
	for(int i=0;i<15;i++)
	{
		a[i]=i;
		printf("%d\t",a[i]);
	}
	printf("\nplease enter n\n");
	scanf("%d",&n);
	
	while(l<=r)
	{
		if(n>a[r]||n<a[l])
		{
			printf("n is not in a\n");
			break;
		}
		m=(r+l)/2;
		if(a[m]>n)
		{
			r=m;
		}
		else if(a[m]<n)
		{
			l=m;
		}
		else 
		{
			printf("n is in %d\n",m+1);
			break;
		}
	}
	return 0;
}
