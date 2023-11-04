#include<iostream>
using namespace std;
#include<string>
int main()
{
	int a[10][10]={0},i,j,k,m,n;
	a[0][0]=1;
	for(i=0;i<10;i++)
	{
		a[i][0]=1;
		for(j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
