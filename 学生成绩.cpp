#include<stdio.h>
void avg(double (*a)[5]) 
{
	double s;
	int i;
	for(i=0;i<10;i++)
	{
		s=(a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4])/5;
		printf("��%d��ѧ����ƽ����Ϊ%lf\n",i+1,s);
	}
}
void avg2(double (*a)[5])
{
	double s=0;
	int i,j;
	for(i=0;i<=4;i++)
	{
		s=0; 
		for(j=0;j<=9;j++)
		{
			s=s+a[j][i];
		}
		printf("��%d�ſε�ƽ����Ϊ%lf\n",i+1,s/10);
	}
}
void max(double (*a)[5])
{
	double*p=&a[0][0];
	int i,j,n,m;
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
		{
			if(*p<a[j][i])
			{
				p=&a[j][i];
				m=j;n=i;
			}
		}
	}
	printf("��%d��ѧ����%d�ſ�����߷�\n",m+1,n+1);
}
int main()
{
	double a[10][5];
	int i,j;
	printf("������ɼ�\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			//printf("�������%d��ѧ����%d�ſ�\n",i+1,j+1);
			scanf("%lf",&a[i][j]);
		}
	}
	avg(a);
	avg2(a);
	max(a);
	return 0;
}
