#include<stdio.h>
void max(int *p,int *q)
{
	int t;
	if(*p>*q)
	{
		t=*p;
		*p=*q;
		*q=t;
	}
}
int main()
{
	int a,b,c,*p,*q,*m;
	scanf("%d,%d,%d",&a,&b,&c);
	p=&a;
	q=&b;
	m=&c;
	max(p,q);
	max(q,m);
	max(p,q);
	printf("%d,%d,%d\n",a,b,c);
	return 0;
}