#include<stdio.h>
int main()
{
	int i,n,j;
	long long p,a[1000]={0};
	scanf("%d",&n);//����N��NΪ������ 
	while(n!=0)//n=0���� 
	{
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);//�������ӵ�ֵ 
		}
		for(i=0;i<n;i++)
		{
			p=a[i];//p��¼a[i]��ֵ 
			for(j=i+1;j<n;j++)//ɨ��a[i]�������������a[i]�����ӵ�a[i]�pֵ����Ϊ��a[i]ֵ�����һ����������ɨ�� 
			{
				if(p<a[j])
				{
					a[i]=a[i]+a[j];
					p=a[j];
				}
			}//����ⲽ��a[i]�����Ե�i������ʼ������������ӵĺ� 
		}
		for(i=1;i<n;i++)
		{
			if(a[0]<a[i])
			{
				a[0]=a[i];//�ҵ��������ŵ�a[0]�� 
			}
		}
		if(a[0]<0)
		{
			a[0]=0;//���������С��0����ֱ����㵽�յ��0�� 
		}
		printf("%lld\n",a[0]);
		scanf("%d",&n); 
	}
	return 0;
}
