#include<stdio.h>
#include<stdlib.h>

typedef int Elemtype;

//ѭ��������
typedef struct LNode
{
	Elemtype data;
	struct LNode *next;
}LNode,*Linklist;


//ѭ���������ʼ�� 
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


//ѭ���������п�
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





//�жϽ��p�Ƿ�Ϊѭ�����������һ����� 
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








 



//˫���� 
typedef struct DNode
{
	int data;
	DNode *prior,*next;
}DNode,*DLinklist;

//��ͷ����ʼ��
bool initial(DLinklist &L) 
{
	L=(DNode *)malloc(sizeof(DNode));
	//�ڴ治�㣬����ʧ��  
	if(L==NULL)
	{
		return false;
	}
	L->next=NULL;
	L->prior=NULL;
	return true;
}

//�пգ���ͷ��㣩 
bool empty(DLinklist &L)
{
	if(L->next)
	{
		return false;
	}
	return true;
}



//��p�������s��� 
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






//��ͷ�����
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





//��ͷ���ɾ��p��̽��
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



//ɾ��
void DestoryList(DLinklist &L)
{
	while(L->next!=NULL)
	{
		DeleteNextDNode(L);
		
	}
	free(L);
	L=NULL;
} 



//��ʼ���µ�ѭ��˫����
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




//ѭ��˫�����п�
bool Dempty(DLinklist L)
{
	if(L->next ==L)
	{
		return true;
	}
	else
	    return false;
	
}





//�жϽ��p�Ƿ�Ϊѭ��˫����ı�β��� 
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
