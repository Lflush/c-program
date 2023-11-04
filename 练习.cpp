#include<stdio.h>
#include<stdlib.h>



typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode,*Linklist;



bool initial(Linklist &L)
{
	L=(LNode *)malloc(sizeof(LNode));
	if(L==NULL)
	{
		return false;
	}
	L->next =NULL;
	return true;
}




bool empty(Linklist &L)
{
	if(L->next==NULL)
	{
		return true;
	}
	return false;
}



bool insert(Linklist &L,int n,int e)
{
	if(n<0)
	{
		return false;
	}
	int i=0;
	LNode *p=L;
	for(;p!=NULL&&i<n-1;)
	{
		p=p->next ;
		i++;
	}
	if(p==NULL)
	{
		return false;
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	if(s==NULL)
	{
		return false;
	}
	s->data =e;
	s->next =p->next ;
	p->next =s;
	return true;
}



bool insertnext(LNode *p,int e)
{
	if(p==NULL)
	{
		return false;
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	if(s==NULL)
	{
		return false;
	}
	s->data=e;
	s->next=p->next ;
	p->next =s;
	return true;
}


bool insertini(LNode *p,int e)
{
	if(p==NULL)
	{
		return false;
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	if(s==NULL)
	{
		return false;
	}
	s->data =p->data ;
	s->next =p->next ;
	p->data =e;
	p->next =s;
	return true;
}



bool deletelist(Linklist &L,int n,int &e)
{
	int i;
	if(i<0)
	{
		return false;
	}
	LNode *p=L;
	for(;p!=NULL&&i<n-1;)
	{
		p=p->next ;
		i++;
	}
	if(p==NULL)
	{
		return false;
	}
	if(p->next==NULL)
	{
		return false;//p后无结点 
	}
	LNode *q=p->next ;
	e=q->data ;
	p->next =q->next ;
	free(q);
	return true;
}


LNode *getelem(Linklist L,int i)
{
	if(i<0)
	{
		return NULL;//位置值不合法 
	}
	LNode *p;
	int j=0;
	p=L;
	while(p!=NULL&&j<i)//找到i个结点 
	{
		p=p->next;
		j++;
	}
	return p;
}


LNode *locate(Linklist L,int e)
{
	LNode *p=L;
	for(;p!=NULL&&p->data !=e;)
	{
		p=p->next ;
	}
	return p;
}

Linklist headinsert(Linklist &L)
{
	int x;
	L=(LNode *)malloc(sizeof(LNode));
	L->next =NULL;
	scanf("%d",&x);
	for(;x!=9999;)
	{
		LNode *s=(LNode *)malloc(sizeof(LNode));
		s->data =x;
		s->next =L->next ;
		L->next =s;
		scanf("%d",&x);
	}
	return L;
	
	
}


void visit(Linklist L)
{
	LNode *p=L->next ;
	for(;p!=NULL;)
	{
		
		printf("%d\t",p->data ) ;
		p=p->next;
	}
}





int main()
{
	Linklist L;
	L=headinsert(L);
	visit(L);
	return 0;
}
