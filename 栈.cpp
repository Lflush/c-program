#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10
typedef struct sqstack 
{
	int data[Maxsize];
	int top;
}sqstack;
void initial(sqstack &S)
{
	S.top=-1;
}

//≈–ø’
bool empty(sqstack S)
{
	if(S.top ==-1)
	{
		return true;
		
	}
	else
	{
		return false;
	}
} 
bool push(sqstack &S,int e)//»Î’ª 
{
	if(S.top==Maxsize-1)
	{
		return false;
	}
	S.top=S.top+1;
	S.data[S.top]=e;
	//S.data[++S.top]=e;
	return true;
}
bool pop(sqstack &S,int &e)
{
	if(S.top==-1)
	{
		return false;
	}
	e=S.data[S.top];
	S.top=S.top-1;
	//e=S.data[S.top--];
	return true;
}
