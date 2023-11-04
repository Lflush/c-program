#include<stdio.h>
#include<stdlib.h>



//定义数据的类型为int 
typedef int Elemtype;


//定义单链表结点类型 
typedef struct LNode
{
	Elemtype data;
	struct LNode *next;
}LNode,*Linklist;


//不带头结点初始化
bool initial(Linklist &L) 
{
	L=NULL;
	return true;
}



//带头结点初始化
bool initial2(Linklist &L) 
{
	L=(LNode *)malloc(sizeof(LNode));//分配一个头结点 
	if(L==NULL)//内存不足，分配失败 
	{
		return false;
	}
	L->next=NULL;//头结点后暂时没有结点 
	return true;
} 


//不带头结点判空
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


//带头结点判空
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



//按位序插入结点（带头结点）
bool insert(Linklist &L,int i,Elemtype e) 
{
	if(i<1)
	{
		return false;//位置值不合法 
	}
	LNode *p;
	int j=0;
	p=L;
	while(p!=NULL&&j<i-1)//找到i-1个结点 
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	{
		return false;//i值不合法 
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;//最后两句不能颠倒 
	p->next=s;
	return true;
}




//不带头结点按位序插入 
bool insert2(Linklist &L,int i,Elemtype e) 
{
	if(i<1)
	{
		return false;//位置值不合法 
	}
	//插入位序为1时特殊 
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
	while(p!=NULL&&j<i-1)//找到i-1个结点 
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	{
		return false;//i值不合法 
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;//最后两句不能颠倒 
	p->next=s;
	return true;
}





//带头结点后插操作 
bool insertnext(LNode *p,Elemtype e)
{
	if(p==NULL)
	{
		return false;
	}
	LNode *s=(LNode *)malloc(sizeof(LNode));
	//内存分配失败 
	if(s==NULL)
	{
		return false;
	}
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
} 




//带头结点前插操作 
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



//按位序删除（带头结点） 
bool deletelist(Linklist &L,int i,Elemtype &e)
{
	if(i<1)
	{
		return false;//位置值不合法 
	}
	LNode *p;
	int j=0;
	p=L;
	while(p!=NULL&&j<i-1)//找到i-1个结点 
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	{
		return false;//i值不合法 
	}
	if(p->next==NULL)
	{
		return false;//p后无结点 
	}
	LNode *q=p->next;
	p->next=q->next;
	e=q->data;
	free(q);
	return true;
}



//删除某个结点//但是不能删最后一个 
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






//按位查找 
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



//按值查找 
LNode *locate(Linklist L,Elemtype e)
{
	LNode *p=L->next;
	while(p!=NULL&&p->data!=e)
	{
		p=p->next;
	}
	return p;
}






//尾插法建立单链表
Linklist List_Tailinsert(Linklist &L)
{
	int x;
	LNode *s,*r=L;
	L=(LNode *)malloc(sizeof(LNode));
	scanf("%d",&x);
	//输入9999结束 
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






//头插法建立单链表 (链表的逆置！)
Linklist List_Headinsert(Linklist &L)
{
	int x;
	LNode *s;
	L=(LNode *)malloc(sizeof(LNode));
	L->next=NULL;
	scanf("%d",&x);
	//输入9999结束 
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
		printf("指针为空\n");
	}
	printf("%d\n",p->data );
}




//菜单界面 
void showMenu()
{
	printf("                \n");
	printf("   1.建立链表   \n");
	printf("   2.查找数据   \n");
	printf("   3.删除数据   \n");
	printf("   4.插入数据   \n");
	printf("   5.遍历链表   \n");
	printf("   0.退出系统   \n");
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
				printf("0 头插法\n");
				printf("1 尾插法\n");
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
				    printf("1 按位查找\n");
				    printf("0 按值查找\n");
				    scanf("%d",&i); 
				    if(i)
				    {
				    	printf("请输入查找位置\n");
				    	int n;
				    	scanf("%d",&n);
				    	LNode *p=getelem(L,n);
				    	visit(p);
					}
					else
					{
						printf("请输入查找值\n");
						int n;
				    	scanf("%d",&n);
				    	LNode *p=locate(L,n);
				    	if(p==NULL)
				    	{
				    		printf("没有查找值\n");
						}
						else
						{
							visit(p);
							printf("存在查找值\n");
						}
					}
					system("pause");
				    system("cls");
				    break;
				}
				
				
				
			case 3:
				{
						printf("请输入删除结点位置\n");
						int n,e;
				    	scanf("%d",&n);
				    	if(deletelist(L,n,e)) 
				    	{
				    		printf("删除成功\n");
				    		
						}
						else
						{
							printf("删除失败\n");
						} 
						system("pause");
				        system("cls");
				        break;
				}
				
				
			case 4:
				{
					printf("请输入插入结点位置\n");
					int n,e;
				    scanf("%d",&n);
				    printf("请输入插入结点数据\n");
				    scanf("%d",&e);
				    if(insert(L,n,e)) 
				    	{
				    		printf("插入成功\n");
				    		
						}
						else
						{
							printf("插入失败\n");
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
					printf("感谢使用\n");
					system("pause");
					return 0;
					break;
				}
			
			
			default:
				printf("输入错误,请重新输入\n");
				system("pause");
				system("cls");
				break;
		}
		
	} 
	
	return 0;
}
