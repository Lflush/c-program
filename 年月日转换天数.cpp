#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,j,k=0,y,m,d;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("please enter year, month and day\n");
	scanf("%d%d%d",&y,&m,&d);
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		a[1]++;
	}
	for(i=0;i<m-1;i++)
	{
		k=k+a[i];
	}
	k=k+d;
	printf("%d\n",k);
	return 0;
}
