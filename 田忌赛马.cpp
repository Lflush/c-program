#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=0)//n���� 
	{
		int i,p,t,m=0,count=0,ks=n-1,kf=0,ts=n-1,tf=0,a[1000],b[1000];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);//��ɵ��� 
		}
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);//�������� 
		}
		
		for(i=0;i<n;i++)
	    {
		    for(p=i+1;p<n;p++)//�������� 
		    {
			    if(a[i]<a[p])
			    {
				  t=a[i];
				  a[i]=a[p];
				  a[p]=t;
			    }
		    }
		    //printf("%d",a[i]);
	    }
	   for(i=0;i<n;i++)
	    {
		    for(p=i+1;p<n;p++)
		    {
			    if(b[i]<b[p])
			    {
				  t=b[i];
				  b[i]=b[p];
				  b[p]=t;
			    }
		    }
		    //printf("%d",b[i]);
	    }
	    while(ks>=kf&&ts>=tf)//���������ص���һֱ�ж����ص� 
	    {
	    	if(a[tf]>b[kf])//���>���� �����Ӯһ�� 
	    	{
	    		count++;
	    		tf++;
	    		kf++;
			}
			else if(a[tf]<b[kf])//���<���죬�������������� 
			{
				count--;
				kf++;
				ts--;
			}
			else if(a[tf]==b[kf])//���=���� 
			{
				if(a[ts]>b[ks])//����>����������Ӯһ�� 
				{
					count++;
					ts--;
					ks--;
				}
				else if(a[ts]<b[ks])//����<����������������
				{
				 	count--;
				    ts--;
				    kf++;
				}
				else if(a[ts]==b[ks])
				{
					if(a[ts]<b[kf])//����vs���� 
					{
						count--;
						ts--;
						kf++;
					}
					else if(a[ts]==b[kf])//ȫ��һ�� 
					{
						ts--;
						tf++;
						ks--;
						kf++;
					}
				}
			}
		}
		printf("%d\n",count*200);
	}
	return 0;
}
