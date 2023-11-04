#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
	int code;
	char name[20];
	char sex;
	int age;
	student *next;
};
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	int n=0;
	p1=(student*)malloc(LEN);
	scanf("%d %s %c %d",&p1->code,&p1->name,&p1->sex,&p1->age);
	head=p1;
	p2=p1;
	while(p1->code!=0)
	{
		n=n+1;
		
		p1=(student*)malloc(LEN);
		scanf("%d %s %c %d",&p1->code,&p1->name,&p1->sex,&p1->age);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return(head);
}
int main()
{
	int age;
	struct student *p,*q,*k;
	printf("please enter age:\n");
	scanf("%d",&age);
	k=q=p=creat();
	while(p!=NULL)
	{
		if(p->age==age)
		{
			if(q!=p)
			{
				q->next=p->next;
				p=p->next;
			}
			else
			{
				k=p=q=p->next;
			}
		}
		else
		{
			q=p;
		    p=p->next;
		}
		
	}
	while(k!=NULL)
	{
		printf("%d,%s,%c,%d\n",k->code,k->name,k->sex,k->age);
		k=k->next;
	}
	return 0;
}
