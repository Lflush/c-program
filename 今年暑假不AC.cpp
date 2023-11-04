#include<stdio.h>
int main()
{
	int a[100],b[100],n,m,i=0,j,t;
	scanf("%d",&t);
	while(t!=0)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d %d",&a[j],&b[j]);
		}
		for(i=0;i<t-1;i++)
	    {
		   for(j=i+1;j<t;j++)
	 	   {
			  if(b[i]>b[j])
			  {
				n=a[i];
				a[i]=a[j];
				a[j]=n;
				n=b[i];
				b[i]=b[j];
				b[j]=n;
			  }
		    }
	    }
	    n=1;
	    j=b[0];
	    for(i=1;i<t;i++)
	    {
		   if(a[i]>=j)
		   {
			  n++;
			  j=b[i];
		   }
	    }
	    printf("%d\n",n);
	    scanf("%d",&t);
	}
	return 0;
}
