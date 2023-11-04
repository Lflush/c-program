#include<stdio.h>
int main ()
{
	int i,j,t;
	int a[10];
	for(i=1;i<=10;i++)
	{
		printf("请输入第%d个数\n",i);
		scanf("%d",&a[i-1]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<=9;i++)
		printf("%d\t",a[i]);
	return 0;
}
