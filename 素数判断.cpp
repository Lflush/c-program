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
		    printf("������ֲ�������\n"); 
		    break;
		}
		if(j==i&&n%j!=0)
		{
			printf("�������������\n");
		}
	}
}
int main()
{
	int a;
	printf("������һ����\n");
	scanf("%d",&a);
	judge(a);
	return 0;
}
