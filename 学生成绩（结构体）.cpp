#include <stdio.h>
struct student
{
	char name[10];
	int scode;
	double score[3];
};
void input(student *p)
{
	scanf("%s %d %lf %lf %lf", &p->name, &p->scode, &p->score[0], &p->score[1], &p->score[2]);
	// printf("%s %d %lf %lf %lf",p->name,p->scode,p->score[0],p->score[1],p->score[2]);
}
double aver(student *p[])
{
	int i, j;
	double a = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			a = a + p[i]->score[j];
		}
	}
	a = a / 15;
	return a;
}
int max(student *p[])
{
	int i, j, n;
	double k = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (k < p[i]->score[j])
			{
				k = p[i]->score[j];
				n = i;
			}
		}
	}
	return n;
}
int main()
{
	int i, j, k;
	double a;
	student s[5], *p[5];
	for (i = 0; i < 5; i++)
	{
		p[i] = &s[i];
		input(p[i]);
	}
	a = aver(p);
	printf("3�ſε���ƽ������%lf\n", a);
	k = max(p);
	printf("��߷ֵ�ѧ����\n%s %d %lf %lf %lf", p[k]->name, p[k]->scode, p[k]->score[0], p[k]->score[1], p[k]->score[2]);
	return 0;
}
