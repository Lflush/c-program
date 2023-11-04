#include<stdio.h>
#include<string>
int main()
{
	int i,j=-1,m,n=0,k=-1,w=1;
	char a[100];
	gets(a);
	for(i=0;;i++)
	{
		if(a[i]==' '||a[i]=='\0')
		{
			if(i-j>j-k)
			{
				n=i;
				m=j;
			}
			k=j;
			j=i;
		}
		if(a[i]=='\0')
		{
			break;
		}
	}
	for(i=m+1;i<=n;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}
