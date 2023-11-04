#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=0)//n个马 
	{
		int i,p,t,m=0,count=0,ks=n-1,kf=0,ts=n-1,tf=0,a[1000],b[1000];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);//田忌的马 
		}
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);//国王的马 
		}
		
		for(i=0;i<n;i++)
	    {
		    for(p=i+1;p<n;p++)//降序排列 
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
	    while(ks>=kf&&ts>=tf)//快马慢马不重叠则一直判断至重叠 
	    {
	    	if(a[tf]>b[kf])//田快>王快 田快先赢一场 
	    	{
	    		count++;
	    		tf++;
	    		kf++;
			}
			else if(a[tf]<b[kf])//田快<王快，则以田慢输王快 
			{
				count--;
				kf++;
				ts--;
			}
			else if(a[tf]==b[kf])//田快=王快 
			{
				if(a[ts]>b[ks])//田慢>王慢，田慢赢一场 
				{
					count++;
					ts--;
					ks--;
				}
				else if(a[ts]<b[ks])//田慢<王慢，田慢输王快
				{
				 	count--;
				    ts--;
				    kf++;
				}
				else if(a[ts]==b[ks])
				{
					if(a[ts]<b[kf])//田慢vs王快 
					{
						count--;
						ts--;
						kf++;
					}
					else if(a[ts]==b[kf])//全都一样 
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
