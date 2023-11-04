#include<stdio.h>
void move(char x,char y)
{
	printf("%c->%c\n",x,y);
}
void hannuo(int n,char x,char y,char z)
{
	long long i=0;
	if(n==1)
	{
		move(x,z);
	}
	else
	{
		hannuo(n-1,x,z,y);
	    move(x,z);
	    hannuo(n-1,y,x,z);
	}
}
int main()
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);
	hannuo(n,'A','B','C');
	return 0; 
}
