#include<stdio.h>
void add(char c[])
{
	int d=0,x=0,s=0,k=0,i;
	for(i=0;i<81;i++)
	{
		printf("%c",c[i]); 
	}
	printf("\n");
	for(i=0;i<=80;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
		{
			d++;
		}
		if(c[i]>='a'&&c[i]<='z')
		{
			x++;
		}
		if(c[i]==32)
		{
			k++;
		}
		if(c[i]>='0'&&c[i]<='9')
		{
			s++;
		}
	}
	printf("��д��ĸΪ%d����Сд��ĸΪ%d�����ո�Ϊ%d��������Ϊ%d��\n",d,x,k,s);
}
int main()
{
	int i;
	printf("������һ���ַ�\n");
	char c[81]="0";
	//gets(c);
	for(i=0;i<81;i++)
	{
		scanf("%c",&c[i]);
	} 
	add(c);
	return 0;
}
