#include<stdio.h>
#include<math.h>
#include<string>
void change(int n)
{
	int i;
	i=n/10;
	if(i!=0)
	{
		change(i);
	}
	//putchar(n%10+'0');
	printf("%d",n%10);
	printf(" ");
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0)
	{
		n=-n;
		printf("-");
	}
	change(n);
	return 0;
}
