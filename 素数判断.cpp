#include<stdio.h>
#include<math.h>
void judge(int n)
{
	int i,j;
	i=int(sqrt(n));
	for(j=2;j<=i;j++)
	{
		if(n%j==0)
		{
		    printf("这个数字不是素数\n"); 
		    break;
		}
		if(j==i&&n%j!=0)
		{
			printf("这个数字是素数\n");
		}
	}
}
int main()
{
	int a;
	printf("请输入一个数\n");
	scanf("%d",&a);
	judge(a);
	return 0;
}
