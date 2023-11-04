#include<stdio.h>
#include<stdlib.h>

typedef int Elemtype;

//循环单链表
typedef struct LNode
{
	Elemtype data;
	struct LNode *next;
}LNode,*Linklist;


//循环单链表初始化 
bool InitList(Linklist &L)
{
	L=(LNode *)malloc(sizeof(LNode));
	if(L==NULL)
	{
		return false;
	}
	L->next =L;
	return true;
}


//循环单链表判空
bool empty(Linklist &L)
{
	if(L->next ==L)
	{
		return true;
	}
	else
	{
		return false;
	}
} 





//判断结点p是否为循环单链表最后一个结点 
bool istail(Linklist &L,LNode *p)
{
	if(p->next ==L)
	{
		return true;
	}
	else
	{
		return false;
	}
}








 



//双链表 
typedef struct DNode
{
	int data;
	DNode *prior,*next;
}DNode,*DLinklist;

//带头结点初始化
bool initial(DLinklist &L) 
{
	L=(DNode *)malloc(sizeof(DNode));
	//内存不足，分配失败  
	if(L==NULL)
	{
		return false;
	}
	L->next=NULL;
	L->prior=NULL;
	return true;
}

//判空（带头结点） 
bool empty(DLinklist &L)
{
	if(L->next)
	{
		return false;
	}
	return true;
}



//在p结点后插入s结点 
bool InsertNextDNode(DNode *p,DNode *s)
{
	if(p==NULL||s==NULL)
	{
		return false;
	}
	s->next =p->next ;
	if(p->next !=NULL)
	{
		p->next->prior =s;
	}
	s->prior =p;
	p->next =s;
	return true;
} 






//带头结点后插
bool insert(DNode *p) 
{
	if(p==NULL)
	{
		return false;
	}
	DNode *s=(DNode *)malloc(sizeof(DNode));
	s->next=p->next;
	if(p->next!=NULL)
	{
		p->next->prior=s;
	}
	p->next=s;
	s->prior=p;
	return true;
}





//带头结点删除p后继结点
bool DeleteNextDNode(DNode *p) 
{
	if(p==NULL)
	{
		return false;
	} 
	DNode *q=p->next;
	if(q==NULL)
	{
		return false;
	}
	p->next=q->next;
	if(q->next!=NULL)
	{
		q->next->prior=p;
	}
	free(q);
	return true;
}



//删除
void DestoryList(DLinklist &L)
{
	while(L->next!=NULL)
	{
		DeleteNextDNode(L);
		
	}
	free(L);
	L=NULL;
} 



//初始化新的循环双链表
bool InitDLinklist(DLinklist &L)
{
	L=(DNode *)malloc(sizeof(DNode));
	if(L==NULL)
	{
		return false;
	}
	L->prior =L;
	L->next =L;
	return true;
}




//循环双链表判空
bool Dempty(DLinklist L)
{
	if(L->next ==L)
	{
		return true;
	}
	else
	    return false;
	
}





//判断结点p是否为循环双链表的表尾结点 
bool Distail(DLinklist L,DNode *p)
{
	if(p->next==L)
	{
		return true;
	}
	else
	{
		return false;
	}
}





int main()
{
	
	return 0;
}
