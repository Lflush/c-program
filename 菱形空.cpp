#include<stdio.h>
int main()
{
	int h,i,k,x;
	printf("请输入打印行数\n");
	scanf("%d",&h);
	for(i=1;i<=(h+1)/2;i++)
	{
		for(k=-i+(h+1)/2;k>0;k--)
			printf(" ");
		if(i!=1)
			printf("*");
		for(k=2*i-3;k>0;k--)
			printf(" ");
		printf("*\n");
	}
	for(i=1;i<=(h-1)/2;i++)
	{
		for(k=i;k>0;k--)
			printf(" ");
		if(i!=(h-1)/2)
			printf("*");
		for(k=-2*i+h-2;k>0;k--)
			printf(" ");
		printf("*\n");
	}
	return 0;
}