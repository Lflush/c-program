#include<stdio.h>
int main()
{
	while(1)
	{
		int i,p,m,n,f[1000];
	    double x[1000],j[1000],o=0,t;
		scanf("%d %d",&m,&n);//mΪm��è����n������ 
		if(m==-1&&n==-1)
		{
			break;//-1 -1 ���� 
		}
		for(i=0;i<n;i++)
		{
			scanf("%lf %d",&j[i],&f[i]);//��i����������J[i]����צ�۶�����ҪF[i]����è����
			x[i]=j[i]/f[i];//x[]Ϊ�Լ۱� 
		}
		for(i=0;i<n;i++)
	    {
		    for(p=i+1;p<n;p++)
		    {
			    if(x[i]<x[p])//ѡ���������Լ۱����� 
			    {
				  t=x[i];
				  x[i]=x[p];
				  x[p]=t;
				  t=f[i];
				  f[i]=f[p];
				  f[p]=t;
				  t=j[i];
				  j[i]=j[p];
				  j[p]=t;
			    }
		    }
		    //printf("%lf\n",x[i]);//���� 
	   }
	   for(i=0;i<n;i++)
	   {
	 	   m=m-f[i];//����è��m��˳���f[i] 
	 	   //printf("%d\n",m);//���� 
		   o=o+j[i];//����õ���צ�۶� 
		   //printf("%lf\n",o);
		   if(m<0)
		   {
			  o=o+m*x[i];//��m<0ʱ��m*x[i]��Ϊ������֧���Ķ���o��ȥ 
			  //printf("%lf\n",o);//���Կ���� 
		  	  break;//���� 
		   }
	    }
	    printf("%.3lf\n",o);//��3λС����ʽ��� 
	}
	return 0;
}
