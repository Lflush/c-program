#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Maxsize 10
typedef struct 
{
	char data[Maxsize];
	int top;
}sqstack;
void initial(sqstack &S)
{
	S.top=-1;
}
//≈–ø’
bool empty(sqstack &S)
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
//»Î’ª 
bool push(sqstack &S,char e)
{
	if(S.top==Maxsize-1)
	{
		return false;
	}
	S.top=S.top+1;
	S.data[S.top]=e;
	return true;
}
//≥ˆ’ª 
bool pull(sqstack &S,char &e)
{
	if(S.top==-1)
	{
		return false;
	}
	e=S.data[S.top];
	S.top=S.top-1;
	return true;
}
bool bracketCheck(char *str,int lenth)
{
	int i; 
	sqstack S;
	S.top =-1;
	for(i=0;i<lenth;i++)
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
		{
			push(S,str[i]);
		}
		else 
		{
			if(S.top==-1)
			{
				
				return false;
				
			}
			char t;
			pull(S,t);
			if(str[i]==')'&&t!='(')
			{
				
				return false;
				
			}
			if(str[i]==']'&&t!='[')
			{
				
				return false;
				
			}
			if(str[i]=='}'&&t!='{')
			{
				
				return false;
				 
			}
		}
		
	}
	if(S.top==-1)
		{
			return true;
		}
		else
		{
			printf("5");
			for(int i=0;i<=S.top ;i++)
			{
				printf("%c\n",S.data[i]);
			}
			return false;
			
		}
}
int main()
{
	int n;
	char a[81];
	gets(a);
//	int lenth=0;
//	lenth=sizeof(a)/sizeof(char);
//	printf("%d\n",lenth);
	n=strlen(a);
	printf("%d\n",n);
	if(bracketCheck(a,n))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	
	return 0;
}
