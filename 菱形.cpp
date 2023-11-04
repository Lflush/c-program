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
		for(x=2*i-1;x>0;x--)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=(h-1)/2;i++)
	{
		for(k=i;k>0;k--)
			printf(" ");
		for(x=-2*i+h;x>0;x--)
			printf("*");
		printf("\n");
	}
	return 0;
}