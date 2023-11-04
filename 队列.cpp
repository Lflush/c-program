#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10 


//队列的顺序实现 
typedef struct
{
	Elemtype data[Maxsize];
	int rear,front;
	int size;//增加辅助变量标记队列空和满 
}sqqueue;
//初始化 
void initqueue(sqqueue &Q)
{
	Q.front =0;
	Q.rear =0;
}
//判空
bool empty(sqqueue Q)
{
	if(Q.front =Q.rear )
	{
		return true;
	}
	else
	{
		return false;
	}
} 
//入队
bool Enqueue(sqqueue &Q,Elemtype x)
{
	if(Q.front ==(Q.rear+1)%Maxsize)
	{
		return false;
	}
	Q.data[Q.rear]=x;
	Q.rear =(Q.rear+1)%Maxsize;
	return true;
}
//出队
bool Dequeue(sqqueue &Q,Elemtype &x)
{
	if(Q.front ==Q.rear )
	{
		return false;
	}
	x=Q.data [Q.front ];
	Q.front =(Q.front+1)%Maxsize;
	return true; 
} 









//队列的链式实现

//队列结点 
typedef struct LinkNode
{
	Elemtype data;
	struct LinkNode *next;
}LinkNode;

typedef struct 
{
	LinkNode *front,*rear;
	
}LinkQueue;


//初始化结点(带头结点)
void InitQueue(LinkQueue &Q)
{
	Q.front =Q.rear =(LinkNode *)malloc(sizeof(LinkNode));
	Q.front->next =NULL;
} 

bool empty2(LinkQueue &Q)
{
	if(Q.front==Q.rear )
	{
		return true;
	}
	else
	{
		return false;
	}
}



//入队
void EnQueue2(LinkQueue &Q,Elemtype x)
{
	LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
	s->data=x;
	s->next=NULL;
	Q.rear->next =s;
	Q.rear =s;
	//不带头结点初始化要考虑表空的情况 
//	if(Q.front ==NULL)
//	{
//		Q.front =Q.rear =s;
//	} 
} 




//出队
bool DeQueue2(LinkQueue &Q,Elemtype &x)
{
	if(Q.front ==Q.rear )
	{
		return false;
	}
	LinkNode *p=Q.front->next ;
	Q.front->next =p->next ;
	x=p->data ;
	if(p==Q.rear)
	{
		Q.rear=Q.front ;
	} 
	free(p);
	return true;
} 

