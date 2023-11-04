#include<stdio.h>
#include<stdlib.h>



//�������ݵ�����Ϊint 
typedef int Elemtype;


//���嵥���������� 
typedef struct LNode
{
	Elemtype data;
	struct LNode *next;
}LNode,*Linklist;


//����ͷ����ʼ��
bool initial(Linklist &L) 
{
	L=NULL;
	return true;
}



//��ͷ����ʼ��
bool initial2(Linklist &L) 
{
	L=(LNode *)malloc(sizeof(LNode));//����һ��ͷ��� 
	if(L==NULL)//�ڴ治�㣬����ʧ�� 
	{
		return false;
	}
	L->next=NULL;//ͷ������ʱû�н�� 
	return true;
} 


//����ͷ����п�
bool empty(Linklist L) 
{
	if(L==NULL)
	{
		return true;
	}
	else 
	{
		return false;
	}
}


//��ͷ����п�
bool empty2(Linklist L)
{
	if(L->next==NULL)
	{
		return true;
	}
	else 
	{
		return false;
	}
}



//��λ������㣨��ͷ��㣩
bool insert(Linklist &L,int i,Elemtype e) 
{
	if(i<1)
	{
		return false;//λ��ֵ���Ϸ� 
	}
	LNode *p;
	int j=0;
	p=L;
	while(p!=NULL&&j<i-1)//�ҵ�i-1����� 
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	{
		return false;//iֵ���Ϸ� 
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;//������䲻�ܵߵ� 
	p->next=s;
	return true;
}




//����ͷ��㰴λ����� 
bool insert2(Linklist &L,int i,Elemtype e) 
{
	if(i<1)
	{
		return false;//λ��ֵ���Ϸ� 
	}
	//����λ��Ϊ1ʱ���� 
	if(i==1)
	{
		LNode *s=(LNode *)malloc(sizeof(LNode));
		s->data =e;
		s->next =L;
		L=s;
		return true;
	} 
	LNode *p;
	int j=1;
	p=L;
	while(p!=NULL&&j<i-1)//�ҵ�i-1����� 
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	{
		return false;//iֵ���Ϸ� 
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;//������䲻�ܵߵ� 
	p->next=s;
	return true;
}





//��ͷ�������� 
bool insertnext(LNode *p,Elemtype e)
{
	if(p==NULL)
	{
		return false;
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	//�ڴ����ʧ�� 
	if(s==NULL)
	{
		return false;
	}
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
} 




//��ͷ���ǰ����� 
bool insertinf(LNode *p,Elemtype e)
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
	s->data=p->data;
	s->next=p->next;
	p->next=s;
	p->data=e;
	return true;
}



//��λ��ɾ������ͷ��㣩 
bool deletelist(Linklist &L,int i,Elemtype &e)
{
	if(i<1)
	{
		return false;//λ��ֵ���Ϸ� 
	}
	LNode *p;
	int j=0;
	p=L;
	while(p!=NULL&&j<i-1)//�ҵ�i-1����� 
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	{
		return false;//iֵ���Ϸ� 
	}
	if(p->next==NULL)
	{
		return false;//p���޽�� 
	}
	LNode *q=p->next;
	p->next=q->next;
	e=q->data;
	free(q);
	return true;
}



//ɾ��ĳ�����//���ǲ���ɾ���һ�� 
bool deletenode(LNode *p)
{
	if(p==NULL)
	{
		return false;
	}
	LNode *q=p->next;
	p->data=q->data;
	p->next=q->next;
	free(q);
	return true;
}






//��λ���� 
LNode *getelem(Linklist L,int i)
{
	if(i<0)
	{
		return NULL;//λ��ֵ���Ϸ� 
	}
	LNode *p;
	int j=0;
	p=L;
	while(p!=NULL&&j<i)//�ҵ�i����� 
	{
		p=p->next;
		j++;
	}
	return p;
}



//��ֵ���� 
LNode *locate(Linklist L,Elemtype e)
{
	LNode *p=L->next;
	while(p!=NULL&&p->data!=e)
	{
		p=p->next;
	}
	return p;
}






//β�巨����������
Linklist List_Tailinsert(Linklist &L)
{
	int x;
	LNode *s,*r=L;
	L=(LNode *)malloc(sizeof(LNode));
	scanf("%d",&x);
	//����9999���� 
	while(x!=9999)
	{
		s=(LNode *)malloc(sizeof(LNode));
		s->data =x;
		L->next=s;
		r=s;
		scanf("%d",&x);
	}
	r->next =NULL;
	return L;
}






//ͷ�巨���������� (��������ã�)
Linklist List_Headinsert(Linklist &L)
{
	int x;
	LNode *s;
	L=(LNode *)malloc(sizeof(LNode));
	L->next=NULL;
	scanf("%d",&x);
	//����9999���� 
	while(x!=9999)
	{
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s;
		scanf("%d",&x);
	}
	return L;
}



void visit(LNode *p)
{
	if(p==NULL)
	{
		printf("ָ��Ϊ��\n");
	}
	printf("%d\n",p->data );
}




//�˵����� 
void showMenu()
{
	printf("                \n");
	printf("   1.��������   \n");
	printf("   2.��������   \n");
	printf("   3.ɾ������   \n");
	printf("   4.��������   \n");
	printf("   5.��������   \n");
	printf("   0.�˳�ϵͳ   \n");
	printf("                \n");
}




int main()
{
	Linklist L;
	while(1)
	{
		int s=0;
		showMenu();
		scanf("%d",&s);
		switch(s)
		{
			case 1:
			    {
				int i;
				printf("0 ͷ�巨\n");
				printf("1 β�巨\n");
				scanf("%d",&i);
				if(i)
				{
					L=List_Tailinsert(L);
				} 
				else
				{
					L=List_Headinsert(L);
				}
				system("pause");
				system("cls");
				break;
			    }
			case 2:
				{
					int i;
				    printf("1 ��λ����\n");
				    printf("0 ��ֵ����\n");
				    scanf("%d",&i); 
				    if(i)
				    {
				    	printf("���������λ��\n");
				    	int n;
				    	scanf("%d",&n);
				    	LNode *p=getelem(L,n);
				    	visit(p);
					}
					else
					{
						printf("���������ֵ\n");
						int n;
				    	scanf("%d",&n);
				    	LNode *p=locate(L,n);
				    	if(p==NULL)
				    	{
				    		printf("û�в���ֵ\n");
						}
						else
						{
							visit(p);
							printf("���ڲ���ֵ\n");
						}
					}
					system("pause");
				    system("cls");
				    break;
				}
				
				
				
			case 3:
				{
						printf("������ɾ�����λ��\n");
						int n,e;
				    	scanf("%d",&n);
				    	if(deletelist(L,n,e)) 
				    	{
				    		printf("ɾ���ɹ�\n");
				    		
						}
						else
						{
							printf("ɾ��ʧ��\n");
						} 
						system("pause");
				        system("cls");
				        break;
				}
				
				
			case 4:
				{
					printf("�����������λ��\n");
					int n,e;
				    scanf("%d",&n);
				    printf("���������������\n");
				    scanf("%d",&e);
				    if(insert(L,n,e)) 
				    	{
				    		printf("����ɹ�\n");
				    		
						}
						else
						{
							printf("����ʧ��\n");
						} 
						system("pause");
				        system("cls");
				        break;
				}
				
			
			
			case 5:
				{
					LNode *p=L->next ;
					for(;p!=NULL;)
					{
						printf("%d\t",p->data );
						p=p->next ; 
					}
					system("pause");
				    system("cls");
				    break;
				}
			
			
			
			case 0:
				{
					printf("��лʹ��\n");
					system("pause");
					return 0;
					break;
				}
			
			
			default:
				printf("�������,����������\n");
				system("pause");
				system("cls");
				break;
		}
		
	} 
	
	return 0;
}
