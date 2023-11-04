#include<stdio.h>
#define Maxsize 10
typedef struct
{
	int data[Maxsize];
	int length;
}list;
void initial(list &L)
{
	int i; 
	for(i=0;i<Maxsize;i++)
	{
		L.data[i]=i;
	}
	L.length=i;
}
bool insert(list &L,int i,int e)
{
	if(i<1||i>Maxsize)
	  return false;
	if(L.length==Maxsize)
	  return false;
	int j;
	L.data[i-1]=e;
	for(j=L.length-1;j>=i-1;j--)
	{
		L.data[j+1]=L.data[j];
	}
	
	L.length++;
	return true;
}
bool ldelete(list &L,int i,int &e)
{
	int j;
	if(i<1||i>Maxsize)
	  return false;
	if(L.length==0)
	  return false;
	e=L.data[i-1];
	for(j=i;j<L.length;j++)
	{
		L.data[j-1]=L.data[j];
	}
	L.length--;
	return true;
}
int main()
{
	int i,e=0;
	list L;
	initial(L);
	if(ldelete(L,3,e))
	{
		printf("%d",e);
	}
	for(i=0;i<L.length;i++)
	{
		printf("%d\n",L.data[i]);
	}
	if(insert(L,3,5))
	{
		printf("sc");
	}
	for(i=0;i<L.length;i++)
	{
		printf("%d\n",L.data[i]);
	}
	return 0;
}
