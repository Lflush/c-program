#include<stdio.h>
void aver(double (*a)[5])
{
	double s;
	int i;
	for(i=0;i<4;i++)
	{
		s=(a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4])/5;
		printf("第%d个学生的平均分为%lf\n",i+1,s);
	}
}
void fall(double (*a)[5])
{
	int i,j,n,m;
	double s;
	printf("the fail to pass student:\n");
	for(i=0;i<4;i++)
	{
		n=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]<60)
			{
				n++;
			}
		}
		if(n>2)
		{
			printf("student %d\n",i+1);
			for(m=0;m<5;m++)
			{
				printf("%lf\t",a[i][m]);
			}
			printf("\n");
			s=(a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4])/5;
			printf("第%d个学生的平均分为%lf\n",i+1,s);
		}
	} 
}
void find(double (*a)[5])
{
	int i,j,m,s;
	printf("the average score >90:\n");
	for(i=0;i<4;i++)
	{
		s=(a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4])/5;
		if(s>90)
		{
			printf("student %d\n",i+1);
		}
	}
	printf("the all score >85:\n");
	for(i=0;i<4;i++)
	{
		m=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]<86)
			{
				m++;
			}
		}
		if(m==0)
		{
			printf("student %d\n",i+1);
		}
	}
}
int main()
{
	double a[4][5];
	int i,j;
	printf("请输入成绩\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}
	aver(a);
	fall(a);
	find(a);
	return 0;
}
