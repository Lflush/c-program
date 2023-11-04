#include<stdio.h>
int main()
{
	while(1)
	{
		int i,p,m,n,f[1000];
	    double x[1000],j[1000],o=0,t;
		scanf("%d %d",&m,&n);//m为m吨猫粮，n个房间 
		if(m==-1&&n==-1)
		{
			break;//-1 -1 结束 
		}
		for(i=0;i<n;i++)
		{
			scanf("%lf %d",&j[i],&f[i]);//第i个房间里有J[i]磅的爪哇豆，需要F[i]磅的猫粮。
			x[i]=j[i]/f[i];//x[]为性价比 
		}
		for(i=0;i<n;i++)
	    {
		    for(p=i+1;p<n;p++)
		    {
			    if(x[i]<x[p])//选择排序，用性价比排序 
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
		    //printf("%lf\n",x[i]);//调试 
	   }
	   for(i=0;i<n;i++)
	   {
	 	   m=m-f[i];//用总猫粮m按顺序减f[i] 
	 	   //printf("%d\n",m);//调试 
		   o=o+j[i];//计算得到的爪哇豆 
		   //printf("%lf\n",o);
		   if(m<0)
		   {
			  o=o+m*x[i];//当m<0时，m*x[i]即为不足以支付的豆，o减去 
			  //printf("%lf\n",o);//调试看结果 
		  	  break;//结束 
		   }
	    }
	    printf("%.3lf\n",o);//以3位小数形式输出 
	}
	return 0;
}
