#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10 


//���е�˳��ʵ�� 
typedef struct
{
	Elemtype data[Maxsize];
	int rear,front;
	int size;//���Ӹ���������Ƕ��пպ��� 
}sqqueue;
//��ʼ�� 
void initqueue(sqqueue &Q)
{
	Q.front =0;
	Q.rear =0;
}
//�п�
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
//���
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
//����
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









//���е���ʽʵ��

//���н�� 
typedef struct LinkNode
{
	Elemtype data;
	struct LinkNode *next;
}LinkNode;

typedef struct 
{
	LinkNode *front,*rear;
	
}LinkQueue;


//��ʼ�����(��ͷ���)
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



//���
void EnQueue2(LinkQueue &Q,Elemtype x)
{
	LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
	s->data=x;
	s->next=NULL;
	Q.rear->next =s;
	Q.rear =s;
	//����ͷ����ʼ��Ҫ���Ǳ�յ���� 
//	if(Q.front ==NULL)
//	{
//		Q.front =Q.rear =s;
//	} 
} 




//����
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

